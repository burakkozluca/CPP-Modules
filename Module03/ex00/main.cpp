#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Ninja");

    std::cout << "1 - Hit Point: " << clapTrap.getHitPoints() << std::endl
    << "2 - Energy Point: " << clapTrap.getEnergyPoint() << std::endl
    << "3 - Attack Point: " << clapTrap.getAttackDamage() << std::endl;

    clapTrap.attack("Target");

    std::cout << "1 - Hit Point: " << clapTrap.getHitPoints() << std::endl 
    <<"2 - Energy Point: " << clapTrap.getEnergyPoint() << std::endl
    <<"3 - Attack Point: " << clapTrap.getAttackDamage() << std::endl;

    clapTrap.takeDamage(2);

    if (clapTrap.getHitPoints() >= 0 && clapTrap.getEnergyPoint() > 0)
    {
        std::cout << "1 - Hit Point: " << clapTrap.getHitPoints() << std::endl
        << "2 - Energy Point: " << clapTrap.getEnergyPoint() << std::endl
        << "3 - Attack Point: " << clapTrap.getAttackDamage() << std::endl;
    }
    clapTrap.beRepaired(3);
    
    if (clapTrap.getHitPoints() >= 0 && clapTrap.getEnergyPoint() > 0)
    {
        std::cout << "1 - Hit Point: " << clapTrap.getHitPoints() << std::endl
        <<"2 - Energy Point: " << clapTrap.getEnergyPoint() << std::endl
        <<"3 - Attack Point: " << clapTrap.getAttackDamage() << std::endl;
    }
    return (0);
}