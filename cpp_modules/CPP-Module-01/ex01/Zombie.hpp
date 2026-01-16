#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class   Zombie
{
    private:
    std::string _name;
    public:
    std::string GetName() const;
    void SetName(std::string Name);
    void announce( void );
    Zombie(void);
    ~Zombie(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );






#endif