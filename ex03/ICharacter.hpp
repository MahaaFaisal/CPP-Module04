#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter
{
	protected:
		std::string _name;

	public:
		ICharacter();
		ICharacter(std::string _name);
		ICharacter(ICharacter &other);
		ICharacter &operator=(ICharacter &rhs);
		virtual ~ICharacter();

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif