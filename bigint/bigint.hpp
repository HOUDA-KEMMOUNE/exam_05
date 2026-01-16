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
		bigint(void);
		bigint(const std::string &s);
		bigint(unsigned int n);
		bigint(const bigint &old);
		bigint &operator=(const bigint &old);
		bigint &operator+=(const bigint &num);
		bigint	&operator<<=( int k );
		bigint	&operator>>=( int k );
		const std::string	&get_value(void) const;
		bigint	&operator++();
		bigint	operator++(int);
		~bigint(void);
};

std::ostream	&operator<<(std::ostream &out, const bigint &bi);

int				compare_string(const std::string &A, const std::string &B);
bool			operator==(const bigint &a, const bigint &b);
bool			operator!=(const bigint &a, const bigint &b);
bool			operator<(const bigint &a, const bigint &b);
bool			operator<=(const bigint &a, const bigint &b);
bool			operator>(const bigint &a, const bigint &b);
bool			operator>=(const bigint &a, const bigint &b);

bigint			operator+(const bigint &a, const bigint &b);

bigint			operator<<(const bigint &a, int k);
bigint			operator>>(const bigint &a, int k);

# endif
