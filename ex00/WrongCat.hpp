
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
class WrongCat : public WrongAnimal
{
	public:
		WrongCat ();
		WrongCat (WrongCat &other);
		WrongCat &operator=(WrongCat &rhs);
		~WrongCat();
		
		void makeSound() const ;
		std::string getType() const;

};

#endif