#include "Fixed.hpp"

const int Fixed::bit_num = 8;

Fixed::Fixed()
	: rawBits(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
	: rawBits(other.rawBits){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
	if (this != &other){
		rawBits = other.rawBits;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return this->rawBits;
}

void Fixed::setRawBits(int const raw){
	this->rawBits = raw;
}
