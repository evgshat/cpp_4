#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor Cat" << std::endl;
}

Cat::Cat(Cat &Cat)
{
	std::cout << "Copy constructor Cat" << std::endl;
	*this = Cat;
}

Cat &Cat::operator= (const Cat &Cat)
{
	std::cout << "Assignation operator Cat" << std::endl;
	if (this != &Cat)
		this->type = Cat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Myauuuuuuu" << std::endl;
}
