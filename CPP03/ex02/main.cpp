#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap frag1("flag1");
    frag1.attack("target1");
	frag1.takeDamage(10);

    FragTrap frag2;
    frag2.attack("target2");

    FragTrap frag3(frag1);
    frag3.attack("target3");

    frag1.highFivesGuys();

    return 0;
}

