#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream> 
#include <string>

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		virtual ~Dog();

		void makeSound() const;
};

#endif
