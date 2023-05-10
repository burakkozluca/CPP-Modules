#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &WeaponA)
{
    this->name = name;
    this->weapon = &WeaponA;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}