
#include "Animal.hpp"

Animal::Animal(): _type("Mysterious")
{
	std::cout << "Animal Default Constructor\n";
}

Animal::Animal(Animal &other)
{
	std::cout << "Animal Copy Constructor\n";
	*this = other;
}

Animal &Animal::operator=(Animal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor\n";

}
void Animal::makeSound() const
{
	std::cout << "Animal sound\n";
}

std::string Animal::getType() const
{
	return (this->_type);
}