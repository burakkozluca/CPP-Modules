#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
    this->setName(name);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->getName() << " is now in Gate keeper mode." << std::endl;
}