#include "Zombie.hpp"

Zombie *zobmieHorde(int n, std::string name){
	if (n <= 0)
		return NULL;
	Zombie *horde = new Zombie[n];
	for (int i = 0; i < n; i++){
		horde[i].setname(name);
	}
	return horde;
}
