#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream> 
#include <string>

class FragTrap : public ClapTrap{
	private:
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();
		
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif
