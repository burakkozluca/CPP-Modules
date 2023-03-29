#include "Zombie.hpp"

void randomChump(std::string name)
{
    if(name.length() < 0)
        exit(0);
    Zombie *z = new Zombie(name);
    z->announce();
    delete(z);   
}