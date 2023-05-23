#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string.h>
#include <iomanip>

class Harl
{
public:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void complain(std::string level);
};

#endif