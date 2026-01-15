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

bigint::bigint(std::string &s)
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
