#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->setType("WrongAnimal");
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::setType(const std::string &type)
{
    this->type = type;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "The WrongAnimal makes a sound" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
    this->type = copy.type;
	std::cout << "Copy[WrongAnimal] Assignment operator" << std::endl;
	return *this;
}