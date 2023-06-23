#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();

    virtual ~WrongCat();

    void makeSound() const;

	WrongCat& operator=(const WrongCat& src);
};

#endif