
#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constrcutor\n";
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria parameterized constrcutor\n";
	this->_type = type;
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


std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	(void) target;
	std::cout << "will never be used\n";
}
