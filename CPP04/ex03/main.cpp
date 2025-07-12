#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("Alice");
	ICharacter* bob = new Character("Bob");
	ICharacter* charlie = new Character("Charlie");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *charlie);
	me->use(3, *charlie);
	me->use(4, *bob);
	
	me->unequip(1);
	me->use(1, *bob);
	
	tmp = src->createMateria("lightning");
	if (tmp)
		me->equip(tmp);
	
	Character* copy = new Character(*static_cast<Character*>(me));
	copy->use(0, *bob);
	
	Character assigned("Assigned");
	assigned = *static_cast<Character*>(me);
	assigned.use(2, *charlie);
	
	me->unequip(0);
	copy->use(0, *bob);
	
	delete charlie;
	delete bob;
	delete me;
	delete copy;
	delete src;
	
	return 0;
}
