#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();

    void makeSound();

    Dog(const Dog &copy);
	Dog& operator=(const Dog& src);
};

#endif
