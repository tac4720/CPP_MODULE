#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl; 
}

Cat::Cat(const Cat& other) 
	:Animal(other){
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	if (this != &other){
		Animal::operator=(other);
	}
	std::cout << "Cat Copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Meow" << std::endl;
}
