#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(int const value)
{
    this->number = value << bits; // number * 256
    std::cout << "int to fixed" << std::endl;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value)
{
    this->number = roundf(value *(1 << bits));
    std::cout << "float to fixed" << std::endl;
    std::cout << "Float constructor called" << std::endl; 
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& Copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Copy;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" <<std::endl;
    this->number = other.getRawBits();
    return *this; 
}

Fixed& Fixed::operator=(const int& a) 
{
	this->setRawBits(a);
	return *this;
}

//Fixed point to float
float Fixed::toFloat(void) const {
	return((float)number / (1 << bits));
}

// Fixed point to int
int Fixed::toInt(void) const {
	return(number >> bits);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return number;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
}

// Output overload
std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return (os);
}