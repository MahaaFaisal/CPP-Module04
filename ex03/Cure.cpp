#include "Cure.hpp"

Cure::Cure(): AMateria()
{
	_type = "cure";
	std::cout << "Cure constrcutor\n";
}

Cure::Cure(Cure &other) : AMateria()
{
	std::cout << "Cure copy constrcutor\n";
	*this = other;
}

Cure &Cure::operator=(Cure &rhs)
{
	std::cout << "Cure copy assignment operator\n";
	this->_type = rhs._type;
	return (*this);

}

Cure::~Cure()
{
	std::cout << "AMateria destrcutor\n";
}

std::string const & Cure::getType() const
{
	return (_type);
}

AMateria* Cure::clone() const
{
	AMateria *newCure = new Cure();
	return (newCure);
}

void Cure::use(ICharacter& target)
{
	std::cout <<"Cure: * heals "<< target.getName() << " ’s wounds *" << std::endl;
}