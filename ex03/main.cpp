
#include "Character.hpp"
#include "Cure.hpp"

#include <iostream>

int main()
{
	// std::cout << "test\n";
	ICharacter *ichar = new Character("ichar");
	std::cout << ichar->getName() + "\n";

	AMateria *newmat = new Cure();
	std::cout << newmat->getType() << std::endl;

	ichar->equip(newmat);
	ichar->use(0, *ichar);

}