#include "Zombie.hpp"

int main()
{
    int i = 0;
    Zombie    *zombies = zombieHorde(5, "Zombie Army");

    while (5 > i)
    {
        zombies[i].announce();
        i++;
    }
    delete [] zombies;
    return (0);
}