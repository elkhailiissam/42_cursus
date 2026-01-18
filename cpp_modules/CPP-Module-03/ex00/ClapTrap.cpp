#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string name)
{
    std::cout << "I am the ClapTrap Constructor" << std::endl;
    Name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints <= 0 && EnergyPoints <= 0)
    {
        std::cout << "I am DEAD" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name <<  " attacks "  << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints > 0)
    {
        if (amount >= HitPoints)
            HitPoints = 0;
        else
            HitPoints -= amount;
        std::cout << "Taking damage" << std::endl;
        return ;
    }
    std::cout << "Alraedy dead" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout << "Can't be repaired" << std::endl;
        return;
    }
    std::cout << "Be repaired" << std::endl;
    HitPoints += amount;
    EnergyPoints--;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
    *this = other;
}


ClapTrap::~ClapTrap()
{
    std::cout << "I am the ClapTrap Destructor" << std::endl;
}