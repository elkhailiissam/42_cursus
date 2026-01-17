#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class   Fixed
{
    private:
    int RawBits;
    static const int frac;
    public:
    Fixed();
    Fixed(const int number);
    Fixed(const float number);
    Fixed(const Fixed& old_obj);
    Fixed& operator=(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};


std::ostream& operator<<(std::ostream& out, const Fixed &other);

#endif