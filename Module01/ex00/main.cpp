#include "Zombie.hpp"

int main()
{
    Zombie z = Zombie();
    z.announce();

    Zombie *z1 = newZombie("burak");
    delete(z1);

    Zombie *z2 = new Zombie("umut");
    z2->announce();
    delete(z2);

    randomChump("tuna");
    return(0);
}