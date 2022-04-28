#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat &WrongCat)
{
	std::cout << "Copy constructor WrongCat" << std::endl;
	*this = WrongCat;
}

WrongCat &WrongCat::operator= (const WrongCat &WrongCat)
{
	std::cout << "Assignation operator WrongCat" << std::endl;
	if (this != &WrongCat)
		this->type = WrongCat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Cat!" << std::endl;
}
