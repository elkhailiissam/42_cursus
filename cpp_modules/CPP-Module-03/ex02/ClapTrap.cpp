#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Default"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    EnergyPoints--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead!" << std::endl;
        return;
    }
    if (amount >= HitPoints)
        HitPoints = 0;
    else
        HitPoints -= amount;
    std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage! Remaining hit points: " << HitPoints << std::endl;
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
        std::cout << "ClapTrap " << Name << " has no energy or hit points left to repair!" << std::endl;
        return;
    }
    EnergyPoints--;
    HitPoints += amount;
    std::cout << "ClapTrap " << Name << " is repaired by " << amount << " points! Current hit points: " << HitPoints << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " destructor called" << std::endl;
}