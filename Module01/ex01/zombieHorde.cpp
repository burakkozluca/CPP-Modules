#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;

    Zombie *zombie1 = new Zombie[N];
    while (N > i)
    {
        zombie1[i].setName(name);
        i++;
    }
    return (zombie1);
}