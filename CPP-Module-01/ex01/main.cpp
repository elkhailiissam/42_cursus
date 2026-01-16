#include "Zombie.hpp"

int main()
{
    Zombie *Zombie1 = zombieHorde(3, "ilias");
    for (int i=0;i<3;i++)
        Zombie1[i].announce();
    delete [] Zombie1;
}