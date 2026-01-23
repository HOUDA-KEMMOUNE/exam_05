#include "bigint.hpp"

bigint::bigint( void )
{
	m_value = "0";
}

bigint::bigint( unsigned int n )
{
	std::ostringstream	buffer;

	buffer << n;
	m_value = buffer.str();
}

bigint::bigint( const std::string &num )
{
	m_value = num;
	trim();
	check_digit();
}

bigint::bigint( const bigint &old )
{
	*this = old;
}

bigint	&bigint::operator=( const bigint &old )
{
	if (this != &old)
		m_value = old.m_value;
	return (*this);
}

const std::string &bigint::get_value( void ) const
{
	return (m_value);
}

std::ostream	&operator<<( std::ostream &out, const bigint &num )
{
	out << num.get_value();
	return (out);
}

void			bigint::trim( void )
{
	size_t	pos = m_value.find_first_not_of("0");

	if (pos == std::string::npos)
		m_value = "0";
	else
		m_value = m_value.substr(pos);
}

void			bigint::check_digit( void )
{
	if (m_value.empty())
		m_value = "0";
	
	size_t	i = 0;
	while (i < m_value.size())
	{
		if (!std::isdigit(static_cast<unsigned char>(m_value[i])))
		{
			m_value = "0";
			return ;
		}
		i++;
	}
}

int				compare_num( const std::string &A, const std::string &B )
{
	if (A.size() < B.size())
		return (-1);
	if (A.size() > B.size())
		return (1);
	if (A == B)
		return (0);
	if (A < B)
		return (-1);
	if (A > B)
		return (1);
	return (0);
}

bool			operator==( const bigint &a, const bigint &b )
{
	int	cmp = compare_num(a.get_value(),b.get_value());

	if (cmp == 0)
		return (true);
	return (false);
}

bool			operator!=( const bigint &a, const bigint &b )
{
	int	cmp = compare_num(a.get_value(),b.get_value());

	if (cmp == 0)
		return (false);
	return (true);
}

bool			operator<( const bigint &a, const bigint &b )
{
	int	cmp = compare_num(a.get_value(),b.get_value());

	if (cmp < 0)
		return (true);
	return (false);
}

bool			operator<=( const bigint &a, const bigint &b )
{
	int	cmp = compare_num(a.get_value(),b.get_value());

	if (cmp <= 0)
		return (true);
	return (false);
}

bool			operator>( const bigint &a, const bigint &b )
{
	int	cmp = compare_num(a.get_value(),b.get_value());

	if (cmp > 0)
		return (true);
	return (false);
}

bool			operator>=( const bigint &a, const bigint &b )
{
	int	cmp = compare_num(a.get_value(),b.get_value());

	if (cmp >= 0)
		return (true);
	return (false);
}

bigint			operator+( const bigint &a, const bigint &b )
{
	const std::string	&A = a.get_value();
	const std::string	&B = b.get_value();
	std::string			res;
	int	i = (int)A.size() - 1;
	int	j = (int)B.size() - 1;
	int	carry = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int	digitA = 0;
		if ( i >= 0)
			digitA = A[i] - '0';

		int	digitB = 0;
		if ( j >= 0)
			digitB = B[j] - '0';
		
		int	sum = digitA + digitB + carry;
		int	digit_out = sum % 10;
		carry = sum / 10;

		res.push_back((char)digit_out + '0');
		i--;
		j--;
	}
	std::reverse(res.begin(), res.end());
	return (bigint(res));
}

bigint			operator<<( const bigint &a, int k )
{
	std::string	num = a.get_value();

	if (num == "0")
		return (a);
	if ( k <= 0)
		return (a);

	num.append(k, '0');
	return (bigint(num));
}

bigint			operator>>( const bigint &a, int k )
{
	std::string	num = a.get_value();
	int			size = (int)num.size();

	if (num == "0")
		return (a);
	if (k >= size)
		return (bigint("0"));

	num.erase(size - k);
	return (bigint(num));
}

bigint			&bigint::operator<<=( int k )
{
	*this = *this << k;
	return (*this);
}

bigint			&bigint::operator>>=( int k )
{
	*this = *this >> k;
	return (*this);
}

bigint			&bigint::operator+=( const bigint &num )
{
	*this = *this + num;
	return (*this);
}

bigint			bigint::operator++( int )
{
	bigint	tmp = *this;

	*this = *this + bigint("1");
	return (tmp);
}

bigint			&bigint::operator++()
{
	*this = *this + bigint("1");
	return (*this);
}

bigint::~bigint( void ) {}
