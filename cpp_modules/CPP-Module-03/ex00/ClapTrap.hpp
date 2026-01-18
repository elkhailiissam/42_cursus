#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cmath>


class ClapTrap
{
private:
    /* data */
    std::string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;
public:
    ClapTrap(std::string name);
    ClapTrap& operator=(const ClapTrap &other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap(ClapTrap &other);
    ~ClapTrap();
};

#endif