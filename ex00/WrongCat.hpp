#ifndef	WRONG_CAT_HPP
#define	WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat
{
	protected:
		std::string type;
	public:
		WrongCat();
		WrongCat(WrongCat &WrongCat);
		WrongCat &operator= (const WrongCat &WrongCat);
		~WrongCat();

		void makeSound() const;
};


#endif
