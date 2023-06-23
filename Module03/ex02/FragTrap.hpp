#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    void attack(const std::string& target);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif