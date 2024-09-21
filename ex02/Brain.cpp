#include "Brain.hpp"

Brain::Brain() : _index(0)
{
	_index = 0;
	std::cout << "Brain default constructor\n";
}

Brain::Brain(Brain &other)
{
	std::cout << "Brain copy constructor\n";
	*this = other;
}

Brain &Brain::operator=(Brain &rhs)
{
	std::cout << "Brain copy assignment operator\n";
	_index = rhs._index;
	for (int i = 0; i < _index; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
}

void	Brain::setIdea(std::string idea)
{
	if (_index >= 100)
	{
		std::cout << "Brain is full of ideas\n";
		return ;
	}
	_ideas[_index] = idea;
	_index++;
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < _index; i++)
		std::cout << _ideas[i] << std::endl;
}