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

void WrongCat::makeSound() const
{
    std::cout << "Wrong Miyav miyav." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
    this->type = copy.type;
	std::cout << "Copy[WrongCat] Assignment operator" << std::endl;
	return *this;
}