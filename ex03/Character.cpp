#include "Character.hpp"

Character::Character() : ICharacter()
{
	std::cout << "Character constructor\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	unequiped = new LinkedList();
}

Character::Character(std::string name) : ICharacter(name)
{
	unequiped = new LinkedList();
	std::cout << "Character parameterized constructor\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}


Character::Character(Character &other) : ICharacter()
{
	unequiped = new LinkedList();
	if (this == &other)
		return ;
	std::cout << "Character copy constructor\n";
	*this = other;
}

Character &Character::operator=(Character &rhs)
{
	std::cout << "Character copy assignment operator\n";
	_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
		if (rhs._inventory[i])
			_inventory[i] = rhs._inventory[i]->clone ();
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor\n";
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	delete unequiped;
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
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

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		unequiped->insert(_inventory[idx]);
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_inventory[idx]->use(target);
}