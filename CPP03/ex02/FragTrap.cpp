#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
	std::cout << "FragTrap " << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
    std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->_name << " destructer called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap " << this->_name << " copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap " << this->_name << " copy assignment operator called " << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
	}
	return *this;
}

void FragTrap::attack(const std::string& target){
	if (_energypoints <= 0 || _hitpoints <= 0){
		std::cout << "FragTrap "<< _name << " has no points" << std::endl;
		return;
	}
	--_energypoints;
	std::cout << "FragTrap "<< _name << " attacks "<< target << " causing " << _attackdamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void){
	if (_hitpoints <= 0){
		std::cout << "FragTrap "<< _name << " has no points" << std::endl;
		return;
	}
    std::cout << "FragTrap " << _name << " Hey!!!High Five!!!!" << std::endl;
}
