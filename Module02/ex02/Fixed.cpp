#include "Fixed.hpp"

Fixed::Fixed() {
	this->setRawBits(0);
}

Fixed::Fixed(int const value) {
	this->number = value << bits; // number * 2^8
}

Fixed::Fixed(float const value) {
	this->number = roundf(value * (1 << bits));
}

Fixed::~Fixed() {

}

Fixed::Fixed(const Fixed& Copy) {
	*this = Copy;
}

Fixed& Fixed::operator=(const Fixed& other) {
	this->number = other.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const {
	return((float)number / (1 << bits));
}

int Fixed::toInt(void) const {
	return(number >> bits);
}

bool Fixed::operator>(const Fixed &other) {
	return number > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) {
	return number < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) {
	return number >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) {
	return number <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) {
	return number == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) {
	return number != other.getRawBits();
}

//Aritmethic operators
Fixed Fixed::operator+(const Fixed &other) {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) {
	return Fixed(this->toFloat() / other.toFloat());
}

//Increment - Decrament
Fixed& Fixed::operator++() {
	//++a
	number++;
	return *this;
}

Fixed Fixed::operator++(int) {
	//increment after copy
	//a++
	Fixed pos(*this);// copy
	number++;
	return pos;
}

Fixed& Fixed::operator--() {
	//--a
	number--;
	return *this;
}

Fixed Fixed::operator--(int) {
	//a--
	Fixed neg(*this);
	number--;
	return neg;
}

//Max-Min value func
Fixed& Fixed::min(Fixed &s1, Fixed &s2) {
	if(s1.getRawBits() < s2.getRawBits())
		return s1;
	return s2;
}

const Fixed& Fixed::min(const Fixed &s1, const Fixed &s2){
	if(s1.getRawBits() < s2.getRawBits())
		return s1;
	return s2;
}

Fixed &Fixed::max(Fixed &s1, Fixed &s2){
	if(s1.getRawBits() > s2.getRawBits())
		return s1;
	return s2;
}

const Fixed& Fixed::max(const Fixed &s1, const Fixed &s2) {
	if(s1.getRawBits() > s2.getRawBits())
		return s1;
	return s2;
}

int Fixed::getRawBits() const {
	//std::cout << "getRawBits member function called" << std::endl;
	return number;
}

void Fixed::setRawBits(int const raw) {
	//std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
}

// Output overload
std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return (os);
}
