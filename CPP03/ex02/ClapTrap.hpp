#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream> 
#include <string>

class ClapTrap{
	protected:
		std::string _name;
		int _hitpoints;
		int _energypoints;
		int _attackdamage;
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
