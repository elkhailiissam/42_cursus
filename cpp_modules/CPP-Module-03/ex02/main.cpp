#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
  FragTrap frag("Fraggy");
  frag.attack("Target3");
  frag.takeDamage(70);
  frag.beRepaired(60);
  frag.highFivesGuys();
  return 0;
}