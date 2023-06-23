#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap("Ninja");

    std::cout << "1 - Hit Point: " << scavTrap.getHitPoints() << std::endl
    << "2 - Energy Point: " << scavTrap.getEnergyPoint() << std::endl
    << "3 - Attack Point: " << scavTrap.getAttackDamage() << std::endl;

    scavTrap.attack("Target");
    std::cout << "1 - Hit Point: " << scavTrap.getHitPoints() << std::endl 
    <<"2 - Energy Point: " << scavTrap.getEnergyPoint() << std::endl
    <<"3 - Attack Point: " << scavTrap.getAttackDamage() << std::endl;

    scavTrap.takeDamage(50);
    if (scavTrap.getHitPoints() >= 0 && scavTrap.getEnergyPoint() > 0)
    {
        std::cout << "1 - Hit Point: " << scavTrap.getHitPoints() << std::endl
        << "2 - Energy Point: " << scavTrap.getEnergyPoint() << std::endl
        << "3 - Attack Point: " << scavTrap.getAttackDamage() << std::endl;
    }
    scavTrap.beRepaired(30);
    if (scavTrap.getHitPoints() >= 0 && scavTrap.getEnergyPoint() > 0)
    {
        std::cout << "1 - Hit Point: " << scavTrap.getHitPoints() << std::endl
        <<"2 - Energy Point: " << scavTrap.getEnergyPoint() << std::endl
        <<"3 - Attack Point: " << scavTrap.getAttackDamage() << std::endl;
    }
    scavTrap.guardGate();
    
    return (0);
}