#include "Fixed.hpp"

const int Fixed::frac = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    RawBits = 0;
}

Fixed::Fixed(const Fixed& old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->RawBits = other.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return RawBits;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    RawBits = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}