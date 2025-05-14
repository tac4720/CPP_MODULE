#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
	std::cout << "ScavTrap " << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->_name << " destructer called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap " << this->_name << " copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap " << this->_name << " copy assignment operator called " << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
	}
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if (_energypoints <= 0 || _hitpoints <= 0){
		std::cout << "ScavTrap "<< _name << " has no points" << std::endl;
		return;
	}
	--_energypoints;
	std::cout << "ScavTrap "<< _name << " attacks "<< target << " causing " << _attackdamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
	if (_hitpoints <= 0){
		std::cout << "ScavTrap "<< _name << " has no points" << std::endl;
		return;
	}
    std::cout << "ScavTrap " << _name << " is now Gate keeper mode!" << std::endl;
}
