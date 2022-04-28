#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor Dog" << std::endl;
	brain = new Brain();
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
	{
		delete (this->brain);
		this->type = Dog.type;
		this->brain = new Brain();
		*(this->brain) = *(Dog.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor Dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Gav Gav Gav!!!" << std::endl;
}
