#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl; 
}

Dog::Dog(const Dog& other) 
	:Animal(other){
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if (this != &other){
		Animal::operator=(other);
	}
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) const{
	std::cout << "Woof" << std::endl;
}
