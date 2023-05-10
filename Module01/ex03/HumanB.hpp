#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
public:
    std::string name;
    Weapon *weapon;

    HumanB(std::string name);
    HumanB(Weapon &WeaponB);

    void setWeapon(Weapon &WeaponB);
    void attack();
};

#endif