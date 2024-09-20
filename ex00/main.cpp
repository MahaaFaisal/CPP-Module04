
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Utils.hpp"

#include <iostream>
int main()
{
	Utils::printMsg("meta Animal\n", "green");
	const Animal* meta = new Animal();
	Utils::printMsg("type of Animal: ", "magenta");
	std::cout << meta->getType() << " " << std::endl;
	Utils::printMsg("sound of Animal: ", "magenta");
	meta->makeSound();
	Utils::printMsg("Animal destruction:\n", "red");
	delete meta;
	std::cout << "\n";

	
	// based class pointer, derived class object
	Utils::printMsg("j dog\n", "green");
	const Animal* j = new Dog();
	Utils::printMsg("type of Dog: ", "magenta");
	std::cout << j->getType() << " " << std::endl;
	Utils::printMsg("sound of Dog: ", "magenta");
	j->makeSound(); //will output the dog sound! j->makeSound();
	Utils::printMsg("Dog destruction:\n", "red");
	delete j;
	std::cout << "\n";


	Utils::printMsg("i cat\n", "green");
	const Animal* i = new Cat();
	Utils::printMsg("type of Cat: ", "magenta");
	std::cout << i->getType() << " " << std::endl;
	Utils::printMsg("sound of Cat: ", "magenta");
	i->makeSound(); //will output the cat sound! j->makeSound();
	Utils::printMsg("Cat destruction:\n", "red");
	delete i;

	return 0;
}