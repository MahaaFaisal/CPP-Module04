#include "Character.hpp"

Character::Character() : ICharacter()
{
	std::cout << "Character constructor\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : ICharacter(name)
{
	std::cout << "Character parameterized constructor\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}


Character::Character(Character &other)
{
	// COPY MATERIAS
	(void)other;
	std::cout << "Character copy constructor\n";
}

Character &Character::operator=(Character &rhs)
{
	(void)rhs;
	std::cout << "Character copy assignment operator\n";
	return (*this);

}

Character::~Character()
{
	std::cout << "Character destructor\n";
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	// should we copy the pointers or the values?
	for (int i = 0; i < 4 ; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout<< "equipped " <<_inventory[i]->getType() << std::endl;
			break;
		}
	}
}

// The unequip() member function must NOT delete the Materia!
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

/*
	The use(int, ICharacter&) member function will have to use 
	the Materia at the slot[idx], and pass the target parameter 
	to the AMateria::use function.
*/
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_inventory[idx]->use(target);
}