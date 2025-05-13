#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream> 
#include <string>
#include <cmath>

class Fixed{
	private:
		int rawBits;
		const static int bit_num;
	public:
		Fixed();
		Fixed(const int i);
	    Fixed(const float f);
		Fixed(const Fixed& other);
		~Fixed();
		Fixed& operator=(const Fixed& other);
		
		bool operator>(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int	toInt(void) const;

		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif
