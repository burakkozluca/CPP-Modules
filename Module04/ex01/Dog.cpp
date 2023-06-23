#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->setType("Dog");
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
};

Dog::~Dog()
{
    std::cout << "The dog is destroyed." << std::endl;
    delete this->brain;
};

void Dog::makeSound()
{
    std::cout << "The dog barks." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
    *this = copy;
    std::cout << "Copy[Dog] Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
    this->type = copy.type;
	delete this->brain;
	this->brain = new Brain(*copy.brain);
	std::cout << "Copy[Dog] Assignment operator" << std::endl;
	return *this;
}