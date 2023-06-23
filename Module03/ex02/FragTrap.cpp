#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
    this->setName(name);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << this->getName() << " High Five Guys called " << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if ((this->getHitPoints() != 0 || this->getEnergyPoint() != 0) && (this->getHitPoints() > 0 && this->getEnergyPoint() > 0))
    {
        std::cout << "FragTrap " << this->getName() << " attacks " << target
        << " causing " << this->getAttackDamage() << " points of damage! " << std::endl;
        setEnergyPoint(getEnergyPoint() - 1);
        setHitPoints(getHitPoints() - getAttackDamage());
    }
    else
        std::cout << "FragTrap " << this->getName() << "doesn't have hitPoints or Energy" << std::endl;
}