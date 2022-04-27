#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wrongAn = new WrongAnimal();
	const WrongCat* wrongCat = new WrongCat();

	wrongAn->makeSound();
	wrongCat->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wrongAn;
	delete wrongCat;

	return 0;
}
