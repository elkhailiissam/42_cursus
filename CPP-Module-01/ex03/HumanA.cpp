#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), HumanAWeapon(weapon)
{
    
}
void    HumanA::attack()
{
    std::cout << HumanA::_name<< " attacks with their " << HumanA::HumanAWeapon.getType()<< std::endl;
}