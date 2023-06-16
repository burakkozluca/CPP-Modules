#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
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
    std::cout << "Copy assignment operator called" << std::endl;
    this->num = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return num;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function function" << std::endl;
    this->num = raw;
}