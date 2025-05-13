#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("default"), _hitpoints(10), _energypoints(10), _attackdamage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other._name), _hitpoints(other._hitpoints), _energypoints(other._energypoints), _attackdamage(other._attackdamage){
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this != &other){
		_name = other._name;
		_hitpoints = other._hitpoints;
		_energypoints = other._energypoints;
		_attackdamage = other._attackdamage;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (_energypoints <= 0 || _hitpoints <= 0){
		std::cout << "ClapTrap "<< _name << " has no points" << std::endl;
		return;
	}
	--_energypoints;
	std::cout << "ClapTrap "<< _name << " attacks "<< target << " causing " << _attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	_hitpoints -=amount;
	if (_hitpoints < 0)
		_hitpoints = 0;
	std::cout << "ClapTrap "<< _name << " takes " << amount << " points of damage!" << std::endl;	
	std::cout << "HitPoints: " << _hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energypoints <= 0 || _hitpoints <= 0){
		std::cout << "ClapTrap "<< _name << " has no points" << std::endl;
		return;
	}
	_hitpoints+=amount;
	std::cout << "ClapTrap "<< _name << " repaired " << amount << " hitpoints!" << std::endl;	
	std::cout << "HitPoints: " << _hitpoints << std::endl;
}

std::string ClapTrap::getName() const{ 
	return _name; 
}
int ClapTrap::getHitPoints() const{
	return _hitpoints; 
}
int ClapTrap::getEnergyPoints() const{ 
	return _energypoints; 
}
int ClapTrap::getAttackDamage() const{ 
	return _attackdamage; 
}

void ClapTrap::setHitPoints(int hp) { _hitpoints = hp; }
void ClapTrap::setEnergyPoints(int ep) { _energypoints = ep; }
void ClapTrap::setAttackDamage(int ad) { _attackdamage = ad; }
