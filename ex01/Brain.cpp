#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor Brain" << std::endl;
}

Brain::Brain(const Brain &Brain)
{
	std::cout << "Copy constructor Brain" << std::endl;
	*this = Brain;
}

Brain &Brain::operator= (const Brain &Brain)
{
	std::cout << "Assignation operator Brain" << std::endl;
	if (this != &Brain)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = Brain.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor Brain" << std::endl;
}

