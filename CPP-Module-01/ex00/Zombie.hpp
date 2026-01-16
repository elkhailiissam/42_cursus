#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>



class   Zombie
{
    private:
    std::string _name;
    public:
    std::string GetName() const;
    void announce( void );
    Zombie(std::string Name);
    ~Zombie(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );


#endif