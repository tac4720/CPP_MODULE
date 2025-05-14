#include "Animal.hpp"

Animal::Animal()
	: type("default"){
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string& type)
	: type(type){
	std::cout << "Animal Parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
	: type(other.type){
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	if (this != &other){
		type = other.type;
	}
	std::cout << "Animal Copy assignment operator called" << std::endl;
	return *this;
}

void Animal::makeSound() const{
	std::cout << "Animal make sound" << std::endl;
}
std::string Animal::getType() const{
	return type;
}
