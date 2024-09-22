#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource(), _idx(0)
{
	std::cout << "MateriaSource default constructor\n";
	for (int i = 0; i < 4; i++)
		_learned[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &other): IMateriaSource()
{
	std::cout << "MateriaSource copy constructor\n";
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource &rhs)
{
	_idx = rhs._idx;
	std::cout << "MateriaSource copy assignment oveload\n";
	for (int i = 0; i < rhs._idx; i++)
		_learned[i] = rhs._learned[i]->clone();
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor\n";
	for (int i = 0; i < 4; i++)
		delete _learned[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (_idx >= 4)
		std::cout << "Cannot learn more materias\n";
	else
	{
		_learned[_idx] = m->clone();
		_idx++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4 && _learned[i]; i++)
	{
		if (_learned[i]->getType() == type)
			return _learned[i]->clone();
	}
	return (NULL);
}
