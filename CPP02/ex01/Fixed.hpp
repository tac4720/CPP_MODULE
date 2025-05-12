#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream> 
#include <string>
#include <cmath>

class Fixed{
	private:
		int rawBits;
		const static int bit_num = 8;
	public:
		Fixed();
		Fixed(const int i);
	    Fixed(const float f);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int	to_int(void) const;
};

#endif
