#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "animal.hpp"
#include "brain.hpp"

class Cat : public Animal
{
    private:
    Brain* brain;
    public:
    Cat();
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    ~Cat();
    void makeSound() const;
};

#endif