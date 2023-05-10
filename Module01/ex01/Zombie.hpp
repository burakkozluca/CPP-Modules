#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce( void );

    void setName(std::string name)
    {
        this->name = name;
    };
};

Zombie*    zombieHorde( int N, std::string name );

#endif