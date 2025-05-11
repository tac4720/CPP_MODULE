#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Zombie {
private:
	std::string name;

public:
    Zombie();
    ~Zombie();
	void announce(void);
	void setname(std::string name);
};

Zombie *zobmieHorde(int n, std::string name);

#endif
