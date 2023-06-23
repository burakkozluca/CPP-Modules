#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("Ninja");

    std::cout << "1 - Hit Point: " << fragTrap.getHitPoints() << std::endl
    << "2 - Energy Point: " << fragTrap.getEnergyPoint() << std::endl
    << "3 - Attack Point: " << fragTrap.getAttackDamage() << std::endl;

    fragTrap.attack("Target");
    std::cout << "1 - Hit Point: " << fragTrap.getHitPoints() << std::endl 
    <<"2 - Energy Point: " << fragTrap.getEnergyPoint() << std::endl
    <<"3 - Attack Point: " << fragTrap.getAttackDamage() << std::endl;

    fragTrap.takeDamage(50);
    if (fragTrap.getHitPoints() >= 0 && fragTrap.getEnergyPoint() > 0)
    {
        std::cout << "1 - Hit Point: " << fragTrap.getHitPoints() << std::endl
        << "2 - Energy Point: " << fragTrap.getEnergyPoint() << std::endl
        << "3 - Attack Point: " << fragTrap.getAttackDamage() << std::endl;
    }

    fragTrap.beRepaired(30);
    if (fragTrap.getHitPoints() >= 0 && fragTrap.getEnergyPoint() > 0)
    {
        std::cout << "1 - Hit Point: " << fragTrap.getHitPoints() << std::endl
        <<"2 - Energy Point: " << fragTrap.getEnergyPoint() << std::endl
        <<"3 - Attack Point: " << fragTrap.getAttackDamage() << std::endl;
    }
    fragTrap.highFivesGuys();
    return (0);
}