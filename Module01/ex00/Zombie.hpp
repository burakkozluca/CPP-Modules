#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string Name;
public:
    Zombie();
    Zombie(std::string);
    ~Zombie();
    void announce();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif