#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> //roundf

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
        Fixed &operator=(const int& a);

        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        ~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &other);

#endif