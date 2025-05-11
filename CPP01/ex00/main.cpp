#include "Zombie.hpp"

int main(void){
	Zombie *zo = newZombie("zombie1");
	Zombie *zo2 = newZombie("zombie2");
	zo->announce();
	zo2->announce();
	randomChump("zombie3");
	delete zo;
	delete zo2;
}
