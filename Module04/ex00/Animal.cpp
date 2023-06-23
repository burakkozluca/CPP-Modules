#include "Animal.hpp"

Animal::Animal()
{
    this->setType("Animal");
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::setType(const std::string &type)
{
    this->type = type;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "The animal makes a sound" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "Copy[Animal] Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
    this->type = copy.type;
	std::cout << "Copy[Animal] Assignment operator" << std::endl;
	return *this;
}