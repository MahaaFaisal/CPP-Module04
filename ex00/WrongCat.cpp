
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "Wrongcat";
	std::cout << "WrongCat default constructor\n";
}

WrongCat::WrongCat(WrongCat &other) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor\n";
	*this = other;
}

WrongCat &WrongCat::operator=(WrongCat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Meow\n";
}

std::string WrongCat::getType() const
{
	return (this->_type);
}