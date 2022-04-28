#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &WrongAnimal)
{
	std::cout << "Copy constructor WrongAnimal" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &WrongAnimal)
{
	std::cout << "Assignation operator WrongAnimal" << std::endl;
	if (this != &WrongAnimal)
		this->type = WrongAnimal.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}
