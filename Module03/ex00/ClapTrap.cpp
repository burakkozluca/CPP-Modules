#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor" << std::endl;
    this->setHitPoints(10);
    this->setEnergyPoint(10);
    this->setAttackDamage(0);
    this->setName(name);
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

ClapTrap        &ClapTrap::operator=(ClapTrap const &src)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &src)
	{
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->attackDamage = src.attackDamage;
    }
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap)
{
	stream << " Name: " << clapTrap.getName() << std::endl << " Hitpoints: " << clapTrap.getHitPoints() << std::endl << \
	" Energy Points: " << clapTrap.getEnergyPoint() << std::endl << " Attack Damage: " << clapTrap.getAttackDamage() << std::endl;
	return (stream);
}