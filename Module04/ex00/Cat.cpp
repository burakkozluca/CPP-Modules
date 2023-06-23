#include "Cat.hpp"

Cat::Cat()
{
    this->setType("Cat");
    std::cout << "Cat constructor called" << std::endl;
};

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
};

void Cat::makeSound() const
{
    std::cout << "Miyav miyav." << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Copy[Cat] Constructor called" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy)
{
	std::cout << "Copy[Cat] Assignment operator" << std::endl;
    this->type = copy.type;
	return *this;
}