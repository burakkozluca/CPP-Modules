#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Default destructor" << std::endl;
}

std::string *Brain::getIdeas() const
{
    return((std::string *)ideas);
}