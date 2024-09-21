
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_brain = new Brain();
	_type = "Dog";
	std::cout << "Dog default constructor\n";
}

Dog::Dog(Dog &other) : Animal()
{
	std::cout << "Dog copy constructor\n";
	_brain = new Brain();
	*this = other;
}

Dog &Dog::operator=(Dog &rhs)
{
	std::cout << "Dog copy assignment operator\n";
	this->_type = rhs._type;
	*_brain = *(rhs._brain);
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
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

void	Dog::setIdea(std::string idea)
{
	_brain->setIdea(idea);
}

void	Dog::printIdeas() const
{
	_brain->printIdeas();
}
