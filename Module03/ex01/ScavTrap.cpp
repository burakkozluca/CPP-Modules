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

void ScavTrap::attack(const std::string& target)
{
    if ((this->getHitPoints() != 0 || this->getEnergyPoint() != 0) && (this->getHitPoints() > 0 && this->getEnergyPoint() > 0))
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target
        << " causing " << this->getAttackDamage() << " points of damage! " << std::endl;
        setEnergyPoint(getEnergyPoint() - 1);
        setHitPoints(getHitPoints() - getAttackDamage());
    }
}