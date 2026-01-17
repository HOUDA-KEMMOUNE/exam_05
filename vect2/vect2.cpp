#include "vect2.hpp"

vect2::vect2( void )
{
	x = 0;
	y = 0;
}

vect2::vect2( int a, int b )
{
	x = a;
	y = b;
}

vect2::vect2( const vect2 &old )
{
	*this = old;
}

vect2	&vect2::operator=( const vect2 &old )
{
	if (this != &old)
	{
		x = old.x;
		y = old.y;
	}
	return (*this);
}

int	vect2::get_x( void ) const
{
	return (x);
}

int	vect2::get_y( void ) const
{
	return (y);
}

std::ostream	&operator<<( std::ostream &out, const vect2 &vect )
{
	out << "{" << vect.get_x() << ", " << vect.get_y() << "}";
	return (out); 
}

vect2	operator+( const vect2 &A, const vect2 &B )
{
	int	a1 = A.get_x();
	int	a2 = A.get_y();
	int	b1 = B.get_x();
	int	b2 = B.get_y();

	int	sum1 = a1 + b1;
	int	sum2 = a2 + b2;

	return (vect2(sum1, sum2));
}

vect2	operator-( const vect2 &A, const vect2 &B )
{
	int	a1 = A.get_x();
	int	a2 = A.get_y();
	int	b1 = B.get_x();
	int	b2 = B.get_y();

	int	sum1 = a1 - b1;
	int	sum2 = a2 - b2;

	return (vect2(sum1, sum2));
}

vect2	operator*( const vect2 &A, const vect2 &B )
{
	int	a1 = A.get_x();
	int	a2 = A.get_y();
	int	b1 = B.get_x();
	int	b2 = B.get_y();

	int	sum1 = a1 * b1;
	int	sum2 = a2 * b2;

	return (vect2(sum1, sum2));
}

int	compare_vect( int a1, int a2, int b1, int b2 )
{
	if (a1 == b1 && a2 == b2)
		return (0);
	
	if (a1 > b1 && a2 > b2)
		return (1);

	if (a1 < b1 && a2 < b2)
		return (-1);

	return (0);
}

bool	operator==( const vect2 &A, const vect2 &B )
{
	int	tmp = compare_vect(A.get_x(), A.get_y(), B.get_x(), B.get_y());

	if (tmp == 0)
		return (true);
	return (false);
}

bool	operator!=( const vect2 &A, const vect2 &B )
{
	int	tmp = compare_vect(A.get_x(), A.get_y(), B.get_x(), B.get_y());

	if (tmp == 0)
		return (false);
	return (true);
}

bool	operator<( const vect2 &A, const vect2 &B )
{
	int	tmp = compare_vect(A.get_x(), A.get_y(), B.get_x(), B.get_y());

	if (tmp < 0)
		return (true);
	return (false);
}

bool	operator<=( const vect2 &A, const vect2 &B )
{
	int	tmp = compare_vect(A.get_x(), A.get_y(), B.get_x(), B.get_y());

	if (tmp <= 0)
		return (true);
	return (false);
}

bool	operator>( const vect2 &A, const vect2 &B )
{
	int	tmp = compare_vect(A.get_x(), A.get_y(), B.get_x(), B.get_y());

	if (tmp > 0)
		return (true);
	return (false);
}

bool	operator>=( const vect2 &A, const vect2 &B )
{
	int	tmp = compare_vect(A.get_x(), A.get_y(), B.get_x(), B.get_y());

	if (tmp >= 0)
		return (true);
	return (false);
}

vect2	vect2::operator++(int)
{
	vect2	tmp = *this;
	*this = *this + vect2(1, 1);
	return (tmp);
}

vect2	&vect2::operator++()
{
	*this = *this + vect2(1, 1);
	return (*this);
}

vect2::~vect2( void )
{
}
