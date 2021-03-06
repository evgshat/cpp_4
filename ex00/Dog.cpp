#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor Dog" << std::endl;
}

Dog::Dog(Dog &Dog)
{
	std::cout << "Copy constructor Dog" << std::endl;
	*this = Dog;
}

Dog &Dog::operator= (const Dog &Dog)
{
	std::cout << "Assignation operator Dog" << std::endl;
	if (this != &Dog)
		this->type = Dog.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Gav Gav Gav!!!" << std::endl;
}
