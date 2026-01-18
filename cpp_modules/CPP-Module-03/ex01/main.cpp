#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
  ScavTrap scav("Scavvy");
  scav.attack("Target2");
  scav.takeDamage(50);
  scav.beRepaired(40);
  scav.guardGate();

  return 0;
}