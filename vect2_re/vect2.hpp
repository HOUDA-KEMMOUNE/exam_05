# ifndef VECT2_HPP
# define VECT2_HPP

#include <iostream>
#include <string>

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
		~vect2( void );

		vect2	&operator++();
		vect2	operator++( int );
		vect2	&operator--();
		vect2	operator--( int );

		vect2	&operator+=( const vect2 &v );
		vect2	&operator-=( const vect2 &v );
		vect2	&operator*=( const vect2 &v );

		vect2	&operator*=( int v );

		vect2	&operator-( void );

		int				&operator[]( int i );
		int				operator[]( int i ) const;

		int	get_x( void ) const;
		int	get_y( void ) const;
};

std::ostream	&operator<<( std::ostream &out, const vect2 &v );

int				compare_vect( int x1, int x2, int y1, int y2 );

bool			operator==( const vect2 &v1 , const vect2 &v2 );
bool			operator!=( const vect2 &v1 , const vect2 &v2 );
bool			operator<( const vect2 &v1 , const vect2 &v2 );
bool			operator<=( const vect2 &v1 , const vect2 &v2 );
bool			operator>( const vect2 &v1 , const vect2 &v2 );
bool			operator>=( const vect2 &v1 , const vect2 &v2 );

vect2			operator+( const vect2 &v1 , const vect2 &v2 );
vect2			operator-( const vect2 &v1 , const vect2 &v2 );
vect2			operator*( const vect2 &v1 , const vect2 &v2 );

vect2			operator+( int k , const vect2 &v2 );
vect2			operator-( int k , const vect2 &v2 );
vect2			operator*( int k , const vect2 &v2 );

vect2			operator+( const vect2 &v1 , int k );
vect2			operator-( const vect2 &v1 , int k );
vect2			operator*( const vect2 &v1 , int k );

# endif
