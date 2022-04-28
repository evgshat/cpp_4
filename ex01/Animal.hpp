#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal &animal);
		Animal &operator= (const Animal &animal);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType(void) const;
};

#endif
