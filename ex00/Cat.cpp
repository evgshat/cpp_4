#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor" << std::endl;
}

Cat::Cat(Cat &Cat)
{
	std::cout << "Copy constructor" << std::endl;
}

Cat &Cat::operator= (const Cat &Cat)
{
	std::cout << "Assignation operator" << std::endl;
	if (this != &Cat)
		this->type = Cat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor" << std::endl;
}