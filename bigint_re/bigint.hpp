# ifndef BIGINT_HPP
# define BIGINT_HPP

#include <bits/stdc++.h>

class	bigint
{
	private:
		std::string	m_value;
		void		trim( void );
		void		check_digits( void );

	public:
		bigint( void );
		bigint( unsigned int num );
		bigint( const std::string &num );
		bigint( const bigint &old );
		bigint	&operator=( const bigint &old );
		~bigint( void );
};

# endif
