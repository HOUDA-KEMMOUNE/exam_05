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
		bigint(std::string &s);
		bigint(unsigned int n);
		bigint(const bigint &old);
		bigint &operator=(const bigint &old);
		bigint &operator+=(const bigint &old);
		const std::string	&get_value(void) const;
		~bigint(void);
};

# endif
