#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		templates[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	for (int i = 0; i < 4; i++) {
		if (src.templates[i])
			templates[i] = src.templates[i]->clone();
		else
			templates[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (templates[i])
			delete templates[i];
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const & src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (templates[i])
				delete templates[i];
			if (src.templates[i])
				templates[i] = src.templates[i]->clone();
			else
				templates[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (!templates[i]) {
			templates[i] = m;
			return;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (templates[i] && templates[i]->getType() == type) {
			return templates[i]->clone();
		}
	}
	return NULL;
}