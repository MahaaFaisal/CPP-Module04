#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice constrcutor\n";
}

Ice::Ice(Ice &other) : AMateria("ice")
{
	if (this == &other)
		return ;
	std::cout << "Ice copy constrcutor\n";
	*this = other;
}

Ice &Ice::operator=(Ice &rhs)
{
	std::cout << "Ice copy assignment operator\n";
	this->_type = rhs._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "AMateria destrcutor\n";
}

AMateria *Ice::clone() const
{
	AMateria *newIce = new Ice();
	return (newIce);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}