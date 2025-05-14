#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& other){
	for (int i = 0; i < 100; i++){
		this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain Copy constructor called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other){
	if (this != &other){
		for (int i = 0; i < 100; i++){
			this->ideas[i] = other.ideas[i];
		}
	}
	std::cout << "Brain Copy assignment operator called" << std::endl;
	return *this;
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea; 
}

std::string Brain::getIdea(int index) const{
	return ideas[index];
}
