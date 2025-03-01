#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal 
{
	protected:
		std::string _type;
	
	public:
		WrongAnimal();
		WrongAnimal (WrongAnimal &other);
		WrongAnimal &operator=(WrongAnimal &rhs);
		~WrongAnimal();

		void makeSound() const ;
		std::string getType() const;
};

#endif