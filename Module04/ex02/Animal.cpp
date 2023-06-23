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