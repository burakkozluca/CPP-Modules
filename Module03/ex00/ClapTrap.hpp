#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &src);
    //GETTER AND SETTER FOR print the private variables
    std::string getName();
    void setName(std::string &Name);

    void setHitPoints(int hitPoints);
    int getHitPoints();

    void setAttackDamage(int attack);
    int getAttackDamage();

    void setEnergyPoint(int energyPoint);
    int getEnergyPoint();

    //functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
};

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap);
#endif