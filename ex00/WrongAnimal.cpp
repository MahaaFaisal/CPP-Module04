
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Mysterious")
{
	std::cout << "WrongAnimal Default Constructor\n";
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy Constructor\n";
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor\n";

}
void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound\n";
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}