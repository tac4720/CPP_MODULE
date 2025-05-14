
#include "ScavTrap.hpp"

int main() {
    ScavTrap scav1("scav1");
    scav1.attack("target1");
	scav1.takeDamage(100);

    ScavTrap scav2;
    scav2.attack("target2");

    ScavTrap scav3(scav1);
    scav3.attack("target3");

    scav2 = scav1;
    scav2.attack("target4");

    scav1.guardGate();

    return 0;
}

