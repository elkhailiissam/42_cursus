#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *Zombie1 = new Zombie(name);
    return Zombie1;
}