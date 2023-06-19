#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        ClapTrap();
        int hitpoint;
        int energy_point;
        int attack_damage;
        ~ClapTrap();
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
};

#endif