#include "Zombie.hpp"

Zombie::Zombie()
{
    
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

void Zombie::SetName(std::string Name)
{
    _name = Name;
}