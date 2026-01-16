#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) , HumanBWeapon(NULL)
{
    
}
void    HumanB::attack()
{
    if (HumanBWeapon)
        std::cout << HumanB::_name<< " attacks with their " << HumanB::HumanBWeapon->getType()<< std::endl;
    else
        std::cout << _name << " has no weapon to attack with" << std::endl;
}

void    HumanB::setWeapon(Weapon& HumanBWeapon1)
{
    HumanBWeapon = &HumanBWeapon1;
}