
#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(AMateria &other);
		AMateria &operator=(AMateria &rhs);
		virtual ~AMateria();

		virtual std::string const &getType() const = 0;;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target) = 0;
};

#endif