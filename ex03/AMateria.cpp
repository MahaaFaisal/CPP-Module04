
#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constrcutor\n";
}

AMateria::AMateria(AMateria &other)
{
	std::cout << "AMateria copy constrcutor\n";
	*this = other;
}

AMateria &AMateria::operator=(AMateria &rhs)
{
	std::cout << "AMateria copy assignment operator\n";
	this->_type = rhs._type;
	return (*this);

}

AMateria::~AMateria()
{
	std::cout << "AMateria destrcutor\n";
}