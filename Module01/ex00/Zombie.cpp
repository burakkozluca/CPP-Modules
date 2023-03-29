#include "Zombie.hpp"
//Default cons
Zombie::Zombie()
{
    this->Name = "NoName";
}

//name constructor
Zombie::Zombie(std::string name)
{
    this->Name = name;;
    std::cout << this->Name <<  ": ";
}

//destructor
Zombie::~Zombie()
{
    std::cout << this->Name << ": Zombie has been died" << std::endl;
}

void    Zombie::announce()
{
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}