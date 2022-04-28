#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor Animal" << std::endl;
}

Animal::Animal(Animal &Animal)
{
	std::cout << "Copy constructor Animal" << std::endl;
	*this = Animal;
}

Animal &Animal::operator= (const Animal &Animal)
{
	std::cout << "Assignation operator Animal" << std::endl;
	if (this != &Animal)
		this->type = Animal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Rrrrrrrrrr...." << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}
