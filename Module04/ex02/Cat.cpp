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

void Cat::makeSound()
{
    std::cout << "Miyav miyav." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
    *this = copy;
    std::cout << "Copy[Cat] Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
    this->type = copy.type;
	std::cout << "Copy[Cat] Assignment operator" << std::endl;
	return *this;
}