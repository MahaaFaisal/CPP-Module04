#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"


class Character : public ICharacter
{
	private:
		AMateria *_inventory[4];
	public:
		Character();
		Character(std::string _name);
		Character(Character &other);
		Character &operator=(Character &rhs);
		~Character();

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif