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

std::ostream	&operator<<( std::ostream &out, const vect2 &v )
{
	out << "{" << v.get_x() << ", " << v.get_y() << "}";
	return (out);
}

int				compare_vect( int x1, int x2, int y1, int y2 )
{
	if (x1 > y1 && x2 > y2)
		return (1);
	if (x1 < y1 && x2 < y2)
		return (-1);
	if (x1 == y1 && x2 == y2)
		return (1);
	return (0);
}

bool			operator==( const vect2 &v1 , const vect2 &v2 )
{
	int	cmp = compare_vect(v1.get_x(), v1.get_y(), v2.get_x(), v2.get_y());

	if (cmp == 0)
		return (true);
	return (false);
}

bool			operator!=( const vect2 &v1 , const vect2 &v2 )
{
	int	cmp = compare_vect(v1.get_x(), v1.get_y(), v2.get_x(), v2.get_y());

	if (cmp == 0)
		return (false);
	return (true);
}

bool			operator<( const vect2 &v1 , const vect2 &v2 )
{
	int	cmp = compare_vect(v1.get_x(), v1.get_y(), v2.get_x(), v2.get_y());

	if (cmp < 0)
		return (true);
	return (false);
}

bool			operator<=( const vect2 &v1 , const vect2 &v2 )
{
	int	cmp = compare_vect(v1.get_x(), v1.get_y(), v2.get_x(), v2.get_y());

	if (cmp <= 0)
		return (true);
	return (false);
}

bool			operator>( const vect2 &v1 , const vect2 &v2 )
{
	int	cmp = compare_vect(v1.get_x(), v1.get_y(), v2.get_x(), v2.get_y());

	if (cmp > 0)
		return (true);
	return (false);
}

bool			operator>=( const vect2 &v1 , const vect2 &v2 )
{
	int	cmp = compare_vect(v1.get_x(), v1.get_y(), v2.get_x(), v2.get_y());

	if (cmp >= 0)
		return (true);
	return (false);
}

vect2			operator+( const vect2 &v1 , const vect2 &v2 )
{
	int	x1 = v1.get_x();
	int	x2 = v2.get_x();
	int	y1 = v1.get_y();
	int	y2 = v2.get_y();
	int sum1 = x1 + x2;
	int sum2 = y1 + y2;

	return (vect2(sum1, sum2));
}

vect2			operator-( const vect2 &v1 , const vect2 &v2 )
{
	int	x1 = v1.get_x();
	int	x2 = v2.get_x();
	int	y1 = v1.get_y();
	int	y2 = v2.get_y();
	int sum1 = x1 - x2;
	int sum2 = y1 - y2;

	return (vect2(sum1, sum2));
}

vect2			operator*( const vect2 &v1 , const vect2 &v2 )
{
	int	x1 = v1.get_x();
	int	x2 = v2.get_x();
	int	y1 = v1.get_y();
	int	y2 = v2.get_y();
	int sum1 = x1 * x2;
	int sum2 = y1 * y2;

	return (vect2(sum1, sum2));
}

vect2	&vect2::operator++()
{
	*this = *this + vect2(1, 1);
	return (*this);
}

vect2	vect2::operator++(int)
{
	vect2	tmp = *this;

	*this = *this + vect2(1, 1);
	return (tmp);
}

vect2	&vect2::operator--()
{
	*this = *this - vect2(1, 1);
	return (*this);
}

vect2	vect2::operator--(int)
{
	vect2	tmp = *this;

	*this = *this - vect2(1, 1);
	return (tmp);
}

vect2	&vect2::operator+=( const vect2 &v )
{
	*this = *this + v;
	return (*this);
}

vect2	&vect2::operator-=( const vect2 &v )
{
	*this = *this - v;
	return (*this);
}

vect2	&vect2::operator*=( const vect2 &v )
{
	*this = *this * v;
	return (*this);
}

vect2			operator+( int k , const vect2 &v2 )
{
	int	x2 = v2.get_x();
	int	y2 = v2.get_y();
	int	sum1 = k + x2;
	int	sum2 = k + y2;

	return (vect2(sum1, sum2));
}

vect2			operator-( int k , const vect2 &v2 )
{
	int	x2 = v2.get_x();
	int	y2 = v2.get_y();
	int	sum1 = k - x2;
	int	sum2 = k - y2;

	return (vect2(sum1, sum2));
}

vect2			operator*( int k , const vect2 &v2 )
{
	int	x2 = v2.get_x();
	int	y2 = v2.get_y();
	int	sum1 = k * x2;
	int	sum2 = k * y2;

	return (vect2(sum1, sum2));
}

vect2			operator+( const vect2 &v1 , int k )
{
	int	x1 = v1.get_x();
	int	y1 = v1.get_y();
	int	sum1 = x1 + k;
	int	sum2 = y1 + k;

	return (vect2(sum1, sum2));
}

vect2			operator-( const vect2 &v1 , int k )
{
	int	x1 = v1.get_x();
	int	y1 = v1.get_y();
	int	sum1 = x1 - k;
	int	sum2 = y1 - k;

	return (vect2(sum1, sum2));
}

vect2			operator*( const vect2 &v1 , int k )
{
	int	x1 = v1.get_x();
	int	y1 = v1.get_y();
	int	sum1 = x1 * k;
	int	sum2 = y1 * k;

	return (vect2(sum1, sum2));
}

vect2	&vect2::operator*=( int v )
{
	*this = *this * v;
	return (*this);
}

vect2	&vect2::operator-( void )
{
	*this = *this * vect2(-1, -1);
	return (*this);
}

int		&vect2::operator[]( int i )
{
	if (i == 0)
		return (x);
	return (y);
}

int		vect2::operator[]( int i ) const
{
	if (i == 0)
		return (x);
	return (y);
}

vect2::~vect2( void ) {}
