#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
    std::string _name;
    Weapon &HumanAWeapon;
    public:
    HumanA(std::string name, Weapon& weapon);
    void attack();
};