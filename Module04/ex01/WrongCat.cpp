#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->setType("WrongCat");
    std::cout << "WrongCat constructor called" << std::endl;
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
};

void WrongCat::makeSound()
{
    std::cout << "Wrong Miyav miyav." << std::endl;
}