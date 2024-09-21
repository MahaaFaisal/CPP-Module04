
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		Cat ();
		Cat(Cat &other);
		Cat &operator=(Cat &rhs);
		~Cat();
		
		void makeSound() const ;
		std::string getType() const ;
		void	setIdea(std::string idea);
		void	printIdeas() const;
};

#endif