#include "bigint.hpp"

bigint::bigint(void)
{
	m_value = '0';
}

bigint::bigint(unsigned int n)
{
	std::ostringstream	buffer;
	buffer << n;
	m_value = buffer.str();
}

bigint::bigint(const std::string &s) : m_value(s)
{
	trim();
	check_digits();
}

bigint::bigint(const bigint &old)
{
	*this = old;
}

bigint	&bigint::operator=(const bigint &old)
{
	if (this != &old)
		m_value = old.m_value;
	return (*this);
}

// bigint &bigint::operator+=(const bigint &old)
// {
//     *this = *this + old;
//     return *this;
// }

bigint::~bigint(void)
{
}

void	bigint::trim(void)
{
	size_t	pos = m_value.find_first_not_of('0');

	if (pos == std::string::npos)
		m_value = "0";
	else
		m_value = m_value.substr(pos);
}

void	bigint::check_digits()
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

const std::string	&bigint::get_value(void) const
{
	return (m_value);
}

std::ostream	&operator<<(std::ostream &out, const bigint &bi)
{
	out << bi.get_value();
	return (out);
}

int	compare_string(const std::string &A, const std::string &B)
{
	if (A.size() < B.size())
		return (-1);
	if (A.size() > B.size())
		return (1);
	if (A.size() == B.size())
		return (0);
	if (A < B)
		return (-1);
	if (A > B)
		return (1);
	return (0);
}

bool	operator==(const bigint &a, const bigint &b)
{
	int	tmp = compare_string(a.get_value(), b.get_value());

	if (tmp == 0)
		return (true);
	return (false);		
}

bool	operator!=(const bigint &a, const bigint &b)
{
	int	tmp = compare_string(a.get_value(), b.get_value());

	if (tmp == 0)
		return (false);
	return (true);		
}

bool	operator<(const bigint &a, const bigint &b)
{
	int	tmp = compare_string(a.get_value(), b.get_value());

	if (tmp < 0)
		return (true);
	return (false);		
}

bool	operator<=(const bigint &a, const bigint &b)
{
	int	tmp = compare_string(a.get_value(), b.get_value());

	if (tmp <= 0)
		return (true);
	return (false);		
}

bool	operator>(const bigint &a, const bigint &b)
{
	int	tmp = compare_string(a.get_value(), b.get_value());

	if (tmp > 0)
		return (true);
	return (false);		
}

bool	operator>=(const bigint &a, const bigint &b)
{
	int	tmp = compare_string(a.get_value(), b.get_value());

	if (tmp >= 0)
		return (true);
	return (false);		
}

bigint	operator<<(const bigint &a, int k)
{
	std::string	res = a.get_value();

	if (k <= 0)
		return (a);
	if (res == "0")
		return (a);
	res.append(k, '0');
	return (bigint(res));
}

bigint	operator>>(const bigint &a, int k)
{
	std::string	res = a.get_value();
	int			size = res.size();

	if (k <= 0)
		return (res);
	if (size <= k)
		return (bigint("0"));
	res.erase(size - k);
	return (bigint(res));
}

