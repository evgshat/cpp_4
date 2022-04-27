#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat &WrongCat)
{
	std::cout << "Copy constructor" << std::endl;
	*this = WrongCat;
}

WrongCat &WrongCat::operator= (const WrongCat &WrongCat)
{
	std::cout << "Assignation operator" << std::endl;
	if (this != &WrongCat)
		this->type = WrongCat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Animal!" << std::endl;
}
