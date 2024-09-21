
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_brain = new Brain();
	_type = "Cat";
	std::cout << "Cat default constructor\n";
}

Cat::Cat(Cat &other) : Animal()
{
	std::cout << "Cat copy constructor\n";
	_brain = new Brain();
	*this = other;
}

Cat &Cat::operator=(Cat &rhs)
{
	std::cout << "Cat copy assignment operator\n";
	this->_type = rhs._type;
	*_brain = *(rhs._brain);
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
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

void	Cat::setIdea(std::string idea)
{
	_brain->setIdea(idea);
}

void	Cat::printIdeas() const
{
	_brain->printIdeas();
}
