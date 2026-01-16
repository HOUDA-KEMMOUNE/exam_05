#include "bigint.hpp"

bigint::bigint( void )
{
	m_value = "0";
}

bigint::bigint( unsigned int num )
{
	std::ostringstream	buffer;
	buffer << num;
	m_value = buffer.str();
}

bigint::bigint( const std::string &s )
{
	m_value = s;
	trim();
	check_digits();
}

void	bigint::trim( void )
{
	size_t	pos = m_value.find_first_not_of("0");

	if (pos == std::string::npos)
		m_value = "0";
	else
		m_value = m_value.substr(pos);
}

void	check_digits( void )
{
	
}