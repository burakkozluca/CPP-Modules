#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    void attack(const std::string& target);
    ~ScavTrap();

    //extra
    void guardGate();
};

#endif