#include "Zombie.hpp"


Zombie::Zombie(std::string Name)
{
    _name = Name;
    std::cout << Name <<  " I'm alive!" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << GetName() << " I'm dead." << std::endl;
}
void    Zombie::announce (void)
{
    std::cout << GetName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::GetName() const
{
    return (_name);
}