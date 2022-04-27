#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat &cat);
		Cat &operator= (const Cat &cat);
		~Cat();

		void makeSound() const;
};
