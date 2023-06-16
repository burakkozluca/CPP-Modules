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

        int getRawBits() const;
	    void setRawBits(int const raw);
	    float toFloat(void) const; // Fixed point to float
	    int toInt(void) const; // Fixed point to int

        bool operator>(const Fixed &other);
	    bool operator<(const Fixed &other);
	    bool operator>=(const Fixed &other);
	    bool operator<=(const Fixed &other);
	    bool operator==(const Fixed &other);
	    bool operator!=(const Fixed &other);

        // Aritmethic operators
	    Fixed operator+(const Fixed &other);
	    Fixed operator-(const Fixed &other);
	    Fixed operator*(const Fixed &other);
	    Fixed operator/(const Fixed &other);

        Fixed& operator++();
	    Fixed operator++(int);
	    Fixed& operator--();
	    Fixed operator--(int);

        //Max-Min function
	    static Fixed& min(Fixed &s1, Fixed &s2);
	    static const Fixed& min(const Fixed &s1, const Fixed &s2);
	    static Fixed& max(Fixed &s1, Fixed &s2);
	    static const Fixed& max(const Fixed &s1, const Fixed &s2);

};

//Operator overloading
std::ostream &operator<<(std::ostream &os, const Fixed &other);
#endif