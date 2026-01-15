# ifndef BIGINT_HPP
# define BIGINT_HPP

#include <bits/stdc++.h>

class	bigint
{
	private:
		std::string	m_value;
		void		trim();
		void		check_digits();
	
	public:
		bigint( void );
		bigint( unsigned int n );
		bigint( const std::string &s );
		bigint( const bigint &old );
		bigint &operator=( const bigint &old );
		// bigint &operator+=( const bigint &old );
		std::string	get_value( void );
		~bigint( void );
};

# endif