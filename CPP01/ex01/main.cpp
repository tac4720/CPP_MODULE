#include "Zombie.hpp"

int main(void){
	Zombie *horde = zobmieHorde(10, "test");
    for (int i = 0; i < 10; i++){
		horde[i].announce();
	}
	delete[] horde;
}
