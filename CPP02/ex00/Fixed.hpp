#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream> 
#include <string>

class Fixed{
	private:
		int rawBits;
		const static int bit_num;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
