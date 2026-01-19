#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "animal.hpp"
#include "brain.hpp"

class Dog : public A_Animal
{
    private:
    Brain* brain;
    public:
    Dog();
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);
    ~Dog();
    void makeSound() const;
    void setIdea(int idx, std::string idea);
    std::string getIdea(int idx);

};

#endif