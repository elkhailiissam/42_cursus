#include "Fixed.hpp"

const int Fixed::frac = 8;

Fixed::Fixed()
{
    RawBits = 0;
}

Fixed::Fixed(const Fixed& old_obj)
{
    *this = old_obj;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->RawBits = other.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return RawBits;
}

void Fixed::setRawBits( int const raw )
{
    RawBits = raw;
}

Fixed::Fixed(const int number)
{
    RawBits = number << frac;
}

Fixed::Fixed(const float number)
{
    RawBits = roundf(number * (1 << frac));
}

int Fixed::toInt( void ) const
{
    return RawBits / 256;
}

float Fixed::toFloat( void ) const
{
    return RawBits / 256.0f;
}

Fixed::~Fixed()
{
}

std::ostream& operator<<(std::ostream& out,const Fixed &other)
{
    out << other.toFloat();
    return out;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>(const Fixed &other) const
{
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->getRawBits() != other.getRawBits();
}

Fixed& Fixed::operator++()
{
    RawBits += 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed b = *this;
    RawBits += 1;
    return b;
}

Fixed& Fixed::operator--()
{
    RawBits -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed b = *this;
    RawBits -= 1;
    return b;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}