#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: type("default"){
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
	: type(type){
	std::cout << "WrongAnimal Parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
	: type(other.type){
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	if (this != &other){
		type = other.type;
	}
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string WrongAnimal::getType() const{
	return type;
}
