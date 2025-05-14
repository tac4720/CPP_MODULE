#include "Cat.hpp"

Cat::Cat() : brain(new Brain){
	this->type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl; 
}

Cat::Cat(const Cat& other) 
	:Animal(other), brain(new Brain(*other.brain)){
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other){
	if (this != &other){
		Animal::operator=(other);
		if (this->brain){
			delete this->brain;
		}
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Cat Copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat(){
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Meow" << std::endl;
}

void Cat::setIdea(int index, std::string idea) {
	this->brain->setIdea(index, idea); 
}

std::string Cat::getIdea(int index) const{
	return this->brain->getIdea(index);
}
