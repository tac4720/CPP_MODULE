#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream> 
#include <string>

class Cat : public Animal {
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		virtual ~Cat();
		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;
		void makeSound() const;
};

#endif
