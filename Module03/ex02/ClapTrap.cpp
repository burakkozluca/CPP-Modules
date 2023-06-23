#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Claptrap default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor" << std::endl;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target
        << " causing " << this->attackDamage << " points of damage! " << std::endl;
        this->energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ClapTrap " << this->name << " takes "
        << amount << " points of damage! " << std::endl;
        this->hitPoints -= amount;
        this->energyPoints--; 
        if (this->hitPoints <= 0)
            std::cout << "\033[1;91mdead...\033[0m" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((this->hitPoints != 0 || this->energyPoints != 0) && (this->hitPoints > 0 && this->energyPoints > 0))
    {
        std::cout << "ClapTrap " << this->name << " get health "
        << amount << " points " << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
    }
}

void ClapTrap::setName(std::string &name)
{
    this->name = name;
}

std::string ClapTrap::getName()
{
    return (this->name);
}

void ClapTrap::setHitPoints(int hitpoints)
{
    this->hitPoints = hitpoints;
}

int ClapTrap::getHitPoints()
{
    return (this->hitPoints);
}

void ClapTrap::setAttackDamage(int attack)
{
    this->attackDamage = attack;
}

int ClapTrap::getAttackDamage()
{
    return (this->attackDamage);
}

void ClapTrap::setEnergyPoint(int energyPoint)
{
    this->energyPoints = energyPoint;
}

int ClapTrap::getEnergyPoint()
{
    return (this->energyPoints);
}