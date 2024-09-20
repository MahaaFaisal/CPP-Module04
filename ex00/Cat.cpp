
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "cat";
	std::cout << "Cat default constructor\n";
}

Cat::Cat(Cat &other) : Animal()
{
	std::cout << "Cat copy constructor\n";
	*this = other;
}

Cat &Cat::operator=(Cat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}

std::string Cat::getType() const
{
	return (this->_type);
}