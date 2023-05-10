#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
public:
    std::string name;
    Weapon *weapon;

    HumanA(std::string name, Weapon &WeaponA); //weapon dene
    void attack();
};

#endif