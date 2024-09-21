#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		int	_index;
		std::string _ideas[100];

	public:
		Brain ();
		Brain (Brain &other);
		Brain &operator=(Brain &rhs);
		Brain &operator=(Brain *rhs);
		~Brain ();

		void	setIdea(std::string idea);
		void	printIdeas() const;
};

#endif