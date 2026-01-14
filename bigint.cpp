#include "bigint.hpp"

bigint::bigint( void )
{
}

bigint::bigint( unsigned int n )
{
	std::ostringstream	buffer;

	buffer << n;
	m_value = buffer.str();
}

bigint::bigint( std::string &s )
{
	if (s.empty())
		m_value = "0";
	trim();
	check_digits();
}