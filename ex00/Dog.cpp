#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "dog";
	std::cout << "Dog default constructor\n";
}

Dog::Dog(Dog &other) : Animal()
{
	std::cout << "Dog copy constructor\n";
	*this = other;
}

Dog &Dog::operator=(Dog &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor\n";
}

void Dog::makeSound() const
{
	std::cout << "Wuff\n";
}

std::string Dog::getType() const
{
	return (this->_type);
}