
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog &other);
		Dog &operator=(Dog &rhs);
		~Dog();

		void makeSound() const ;
		std::string getType() const;
};

#endif