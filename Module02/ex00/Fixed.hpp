#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int num;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(int const say);
        Fixed(const Fixed& Copy);
        Fixed &operator=(const Fixed& other); //Overload
        ~Fixed();
        std::string str;
        
        int getRawBits() const;
        void setRawBits(int const raw);
};

#endif