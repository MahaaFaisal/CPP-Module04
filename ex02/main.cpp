
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Utils.hpp"

#include <iostream>

void	printTypes(Animal *animals[])
{
	Utils::printMsg("animals[0] Type: ", "magenta");
	std::cout << animals[0]->getType() + "\n";
	Utils::printMsg("animals[1] Type: ", "magenta");
	std::cout << animals[1]->getType() + "\n";
	Utils::printMsg("animals[2] Type: ", "magenta");
	std::cout << animals[2]->getType() + "\n";
	std::cout << "\n";
}

int main()
{
	// Uncommenting these 2 lines will cause an error
	// Animal *animal = new Animal ();
	// animal->makeSound();


	// Creating an array of animals
	Animal *animals[3];
	std::cout << "\n";

	Utils::printMsg("Animal Dog1 creation\n", "green");
	Animal *dog1 = new Dog();
	animals[0] = dog1;
	std::cout << "\n";

	Utils::printMsg("Animal Dog2 creation\n", "green");
	Animal *dog2 = new Dog();
	animals[1] = dog2;
	std::cout << "\n";

	Utils::printMsg("Animal Cat1 creation\n", "green");
	Animal *cat1 = new Cat;
	animals[2] = cat1;
	std::cout << "\n";

	printTypes(animals);

	Dog *ptrDog = dynamic_cast<Dog *>(animals[0]);
	Dog *ptrCopyDog = dynamic_cast<Dog *>(animals[1]);
	ptrDog->setIdea("dog1 original: copied to dog2");
	*ptrCopyDog = *ptrDog;
	ptrDog->setIdea("dog1 original");
	std::cout << "\n";
	Utils::printMsg("copy dog ideas:\n", "green");
	ptrCopyDog->printIdeas();
	std::cout << "\n";

	for (int i = 0; i < 3; i++)
	{
		Utils::printMsg("animal destruction\n", "red");
		delete animals[i];
	}
	return 0;
}