#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>



class   Fixed
{
    private:
    int RawBits;
    static const int frac;
    public:
    Fixed();
    Fixed(const Fixed& old_obj);
    Fixed& operator=(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};


#endif