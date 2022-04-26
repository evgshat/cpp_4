#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog &dog);
		Dog &operator= (const Dog &dog);
		~Dog();
};
