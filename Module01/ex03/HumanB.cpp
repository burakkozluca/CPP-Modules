#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::HumanB(Weapon &WeaponB)
{
    this->weapon = &WeaponB;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = &Weapon;
}
