#include "animal.hpp"

A_Animal::A_Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = other.type;
}

A_Animal& A_Animal::operator=(const A_Animal &other)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

A_Animal::~A_Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string A_Animal::getType() const
{
    return type;
}

void A_Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}