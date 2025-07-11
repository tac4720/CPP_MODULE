#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(AMateria const & src) : type(src.type) {}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(AMateria const & src) {
	(void)src;
	return *this;
}

std::string const & AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
