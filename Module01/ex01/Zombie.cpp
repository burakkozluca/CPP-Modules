#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

//constructor
Zombie::Zombie()
{
}

//destructor
Zombie::~Zombie()
{
    std::cout << "Zombie has been died" << std::endl;
}
