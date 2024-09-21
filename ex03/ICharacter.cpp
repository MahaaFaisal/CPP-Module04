#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter constructor\n";
}

ICharacter::ICharacter(std::string name) : _name(name)
{
	std::cout << "ICharacter parametrtized constructor\n";

}
ICharacter::ICharacter(ICharacter &other)
{
	(void)other;
	std::cout << "ICharacter copy constructor\n";
}

ICharacter &ICharacter::operator=(ICharacter &rhs)
{
	(void) rhs;
	std::cout << "ICharacter copy assignment operator\n";
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor\n";
}