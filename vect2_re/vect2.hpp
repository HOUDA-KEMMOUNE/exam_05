# ifndef VECT2_HPP
# define VECT2_HPP

#include <bits/stdc++.h>

class	vect2
{
	private:
		int	x;
		int	y;
	
	public:
		vect2( void );
		vect2( int a, int b );
		vect2( const vect2 &old );
		vect2	&operator=( const vect2 &old );

		int		get_x( void ) const;
		int		get_y( void ) const;

		vect2	&operator++();
		vect2	operator++(int);
		vect2	&operator--();
		vect2	operator--(int);

		vect2	&operator+=( const vect2 &v );
		vect2	&operator-=( const vect2 &v );
		vect2	&operator*=( const vect2 &v );

		vect2	&operator*=( int k );

		vect2	&operator-( void );

		int		&operator[]( int i );
		int		operator[]( int i ) const;

		~vect2( void );
};

std::ostream	&operator<<( std::ostream &out, const vect2 &v );

int				compare_vect( int a1, int a2, int b1, int b2 );
bool			operator==( const vect2 &v1, const vect2 &v2 );
bool			operator!=( const vect2 &v1, const vect2 &v2 );
bool			operator<( const vect2 &v1, const vect2 &v2 );
bool			operator<=( const vect2 &v1, const vect2 &v2 );
bool			operator>( const vect2 &v1, const vect2 &v2 );
bool			operator>=( const vect2 &v1, const vect2 &v2 );

vect2			operator+( const vect2 &v1, const vect2 &v2 );
vect2			operator-( const vect2 &v1, const vect2 &v2 );
vect2			operator*( const vect2 &v1, const vect2 &v2 );

vect2			operator+( int k, const vect2 &v2 );
vect2			operator-( int k, const vect2 &v2 );
vect2			operator*( int k, const vect2 &v2 );

vect2			operator+( const vect2 &v1, int k );
vect2			operator-( const vect2 &v1, int k );
vect2			operator*( const vect2 &v1, int k );

# endif
