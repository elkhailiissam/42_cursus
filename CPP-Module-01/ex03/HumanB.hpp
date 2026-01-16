#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
    std::string _name;
    Weapon* HumanBWeapon;
    public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon& Weapon);
};