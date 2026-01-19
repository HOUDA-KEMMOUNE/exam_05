# ifndef BIGINT_HPP
# define BIGINT_HPP

#include <bits/stdc++.h>

class	bigint
{
	private:
		std::string	m_value;
		void	trim( void );
		void	check_digits( void );

	public:
		bigint( void );
		bigint( unsigned int num );
		bigint( const std::string &num );
		const std::string	&get_value( void ) const;
		bigint( const bigint &old );
		bigint	&operator=( const bigint &old );
		bigint	&operator<<=( int k );
		bigint	&operator>>=( int k );
		bigint	&operator+=( const bigint &num );
		bigint	operator++( int );
		bigint	&operator++();
		~bigint( void );
};

std::ostream	&operator<<( std::ostream &out, const bigint &old );

int				compare_num( const std::string &A, const std::string &B );

bool			operator==( const bigint &a, const bigint &b );
bool			operator!=( const bigint &a, const bigint &b );
bool			operator<( const bigint &a, const bigint &b );
bool			operator>( const bigint &a, const bigint &b );
bool			operator<=( const bigint &a, const bigint &b );
bool			operator>=( const bigint &a, const bigint &b );

bigint			operator<<( const bigint &a, int k );
bigint			operator>>( const bigint &a, int k );

bigint			operator+( const bigint &a, const bigint &b );

# endif
