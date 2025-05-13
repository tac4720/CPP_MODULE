#include "Fixed.hpp"

const int Fixed::bit_num = 8;

Fixed::Fixed()
	: rawBits(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i){
	setRawBits(i << bit_num);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f){
	setRawBits(roundf(f * (1 << bit_num)));
	std::cout << "Float constructor called" << std::endl;
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

bool Fixed::operator<(const Fixed& other) const{
	return this->rawBits < other.rawBits;
}

bool Fixed::operator<=(const Fixed& other) const{
	return this->rawBits <= other.rawBits;
}

bool Fixed::operator>(const Fixed& other) const{
	return this->rawBits > other.rawBits;
}

bool Fixed::operator>=(const Fixed& other) const{
	return this->rawBits >= other.rawBits;
}

bool Fixed::operator==(const Fixed& other) const{
	return this->rawBits == other.rawBits;
}

bool Fixed::operator!=(const Fixed& other) const{
	return this->rawBits != other.rawBits;
}

Fixed Fixed::operator+(const Fixed& other) const{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++(){
	this->rawBits++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	this->rawBits++;
	return tmp;
}

Fixed& Fixed::operator--(){
	this->rawBits--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	this->rawBits--;
	return tmp;
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

float Fixed::toFloat(void) const{
	return (float)this->rawBits / (1 << this->bit_num);
}

int Fixed::toInt(void) const{
	return this->rawBits >> this->bit_num;
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b){
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.toFloat();
    return out;
}
