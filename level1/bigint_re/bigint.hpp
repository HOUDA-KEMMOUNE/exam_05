# ifndef BIGINT_HPP
# define BIGINT_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

class	bigint
{
	private:
		std::string	m_value;
		void		trim( void );
		void		check_digit( void );
	
	public:
		bigint( void );
		bigint( unsigned int n );
		bigint( const std::string &num );
		bigint( const bigint &old );
		bigint	&operator=( const bigint &old );
		~bigint( void );

		const std::string &get_value( void ) const;

		bigint			&operator<<=( int k );
		bigint			&operator>>=( int k );
		bigint			&operator+=( const bigint &num );

		bigint			operator++( int );
		bigint			&operator++();
		bigint			&operator>>=( const bigint &num );
};

std::ostream	&operator<<( std::ostream &out, const bigint &num );

int				compare_num( const std::string &A, const std::string &B );

bool			operator==( const bigint &a, const bigint &b );
bool			operator!=( const bigint &a, const bigint &b );
bool			operator<( const bigint &a, const bigint &b );
bool			operator<=( const bigint &a, const bigint &b );
bool			operator>( const bigint &a, const bigint &b );
bool			operator>=( const bigint &a, const bigint &b );

bigint			operator+( const bigint &a, const bigint &b );
bigint			operator<<( const bigint &a, int k );
bigint			operator>>( const bigint &a, int k );

# endif

