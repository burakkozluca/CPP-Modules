#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int num;
        static const int bits = 8;
    public:
        Fixed(); //Sabit nokta sayı degerini 0 olarak başlat
        
        ~Fixed();
};

#endif