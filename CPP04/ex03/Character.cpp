#include "Character.hpp"

Character::Character(std::string const & name) : name(name) {
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(Character const & src) : name(src.name) {
	for (int i = 0; i < 4; i++) {
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
	}
}

Character& Character::operator=(Character const & src) {
	if (this != &src) {
		name = src.name;
		for (int i = 0; i < 4; i++) {
			if (inventory[i])
				delete inventory[i];
			if (src.inventory[i])
				inventory[i] = src.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	return *this;
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			return;
		}
	}
	delete m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && inventory[idx]) {
		delete inventory[idx];
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && inventory[idx]) {
		inventory[idx]->use(target);
	}
}