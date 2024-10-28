#include "Fixed.hpp"


Fixed::Fixed () {
	this->value = 0;
}

Fixed::Fixed (const Fixed &fixed){
	this->value = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed){
	this->value = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed(){
}

int Fixed::getRawBits(void) const{
	return this->value;
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}