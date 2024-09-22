
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

#include <iostream>

// int main()
// {
// 	ICharacter *ichar = new Character("ichar");
// 	std::cout << ichar->getName() + "\n";

// 	AMateria *newmat = new Cure();
// 	std::cout << newmat->getType() << std::endl;

// 	ichar->equip(newmat);
// 	ichar->use(0, *ichar);
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	(void) me;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}