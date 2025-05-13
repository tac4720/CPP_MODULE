
#include "ScavTrap.hpp"

int main() {
    std::cout << "Creating ScavTrap1...\n";
    ScavTrap scav1("Scavenger");
    scav1.attack("target1");

    std::cout << "\nCreating ScavTrap2 using default constructor...\n";
    ScavTrap scav2;
    scav2.attack("target2");

    std::cout << "\nTesting copy constructor...\n";
    ScavTrap scav3(scav1);
    scav3.attack("target3");

    std::cout << "\nTesting assignment operator...\n";
    scav2 = scav1;
    scav2.attack("target4");

    std::cout << "\nTesting special ability...\n";
    scav1.guardGate();

    return 0;
}

