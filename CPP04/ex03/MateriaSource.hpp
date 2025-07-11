#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* templates[4];
	
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();
	MateriaSource& operator=(MateriaSource const & src);
	
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif