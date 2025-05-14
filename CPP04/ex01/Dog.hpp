#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream> 
#include <string>

class Dog : public Animal {
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		virtual ~Dog();
		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;
		void makeSound() const;
};

#endif
