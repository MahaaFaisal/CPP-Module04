#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		
	public:
		Cure();
		Cure(Cure &other);
		Cure &operator=(Cure &rhs);
		~Cure();

		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif