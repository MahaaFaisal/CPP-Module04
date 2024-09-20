
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Cat.hpp"
class Cat : public Animal
{
	public:
		Cat ();
		Cat (Cat &other);
		Cat &operator=(Cat &rhs);
		~Cat();
		
		void makeSound() const ;
		std::string getType() const;

};

#endif