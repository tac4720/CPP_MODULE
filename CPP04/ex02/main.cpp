
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    Animal* animals[10];

    for (int i = 0; i < 10; ++i) {
		
        if (i < 5){
            animals[i] = new Dog();
			animals[i]->makeSound();
		}
        else{
            animals[i] = new Cat();
			animals[i]->makeSound();
		}
    }

	std::cout << "------------------------------" << std::endl;
	Dog origin;
	origin.setIdea(0, "helloworld");
	Dog dummy;
	dummy = origin;
	std::cout << "origin: ";
	std::cout << origin.getIdea(0) << std::endl;
	
	std::cout << "dummy: ";
	std::cout << dummy.getIdea(0) << std::endl;
	
	dummy.setIdea(0, "dummy");
	std::cout << "origin: ";
	std::cout << origin.getIdea(0) << std::endl;
	
	std::cout << "dummy: ";
	std::cout << dummy.getIdea(0) << std::endl;

	std::cout << "------------------------------" << std::endl;
    Cat origin2;
	origin2.setIdea(0, "helloworld");
	Cat dummy2;
	dummy2 = origin2;
	std::cout << "origin2: ";
	std::cout << origin2.getIdea(0) << std::endl;
	
	std::cout << "dummy: ";
	std::cout << dummy2.getIdea(0) << std::endl;
	
	dummy2.setIdea(0, "dummy2");
	std::cout << "origin2: ";
	std::cout << origin2.getIdea(0) << std::endl;
	
	std::cout << "dummy2: ";
	std::cout << dummy2.getIdea(0) << std::endl;
	
	std::cout << "------------------------------" << std::endl;
	
	for (int i = 0; i < 10; ++i) {
        delete animals[i];
    }

    return 0;
}

