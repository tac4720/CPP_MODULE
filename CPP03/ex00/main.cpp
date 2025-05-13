
#include "ClapTrap.hpp"

int main() {
    ClapTrap a("taro");
    ClapTrap b("ken");

    a.attack("ken");
    b.takeDamage(3);
    b.takeDamage(3);
    b.takeDamage(3);
    b.beRepaired(2);
    b.attack("taro");
    a.takeDamage(100);
    a.beRepaired(5);

    return 0;
}
