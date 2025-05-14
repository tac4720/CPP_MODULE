#include "Dog.hpp"

Dog::Dog() : brain(new Brain){
	this->type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl; 
}

Dog::Dog(const Dog& other) 
	:Animal(other), brain(new Brain(*other.brain)){
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if (this != &other){
		Animal::operator=(other);
		if(this->brain){
			delete this->brain;
		}
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(){
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::setIdea(int index, std::string idea) {
	this->brain->setIdea(index, idea); 
}

std::string Dog::getIdea(int index) const{
	return this->brain->getIdea(index);
}

void Dog::makeSound(void) const{
	std::cout << "Woof" << std::endl;
}
