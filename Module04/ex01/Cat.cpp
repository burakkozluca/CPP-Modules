#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->setType("Cat");
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
};

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
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
	delete this->brain;
	this->brain = new Brain(*copy.brain);
	std::cout << "Copy[Cat] Assignment operator" << std::endl;
	return *this;
}