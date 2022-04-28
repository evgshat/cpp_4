#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor Cat" << std::endl;
	brain = new Brain();
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
	{
		delete (this->brain);
		this->type = Cat.type;
		this->brain = new Brain();
		*(this->brain) = *(Cat.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Myauuuuuuu" << std::endl;
}
