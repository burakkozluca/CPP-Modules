#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int number;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(int const value);
        Fixed(float const value);
        Fixed(const Fixed& Copy);
        Fixed &operator=(const Fixed& other);
        ~Fixed();

          
};

#endif