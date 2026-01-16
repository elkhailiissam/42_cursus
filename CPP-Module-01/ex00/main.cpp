#include "Zombie.hpp"

int main()
{
    Zombie *Zombie1;
    Zombie1 = newZombie("ilias");
    randomChump("moro");
    Zombie1->announce();
    delete Zombie1;
}