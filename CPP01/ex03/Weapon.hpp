#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Weapon {
    private:
		std::string type;
    public:
		Weapon(const std::string &type);
		~Weapon();
		const std::string getType(void);
		void setType(const std::string &type);
};

#endif
