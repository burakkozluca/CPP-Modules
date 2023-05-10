#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    std::string getType() const;
    void setType(std::string type);
    
};

#endif