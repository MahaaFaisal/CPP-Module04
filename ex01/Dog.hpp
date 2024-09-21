
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;

	public:
		Dog();
		Dog(Dog &other);
		Dog &operator=(Dog &rhs);
		~Dog();

		void makeSound() const ;
		std::string getType() const;
		void	setIdea(std::string idea);
		void	printIdeas() const;
};

#endif