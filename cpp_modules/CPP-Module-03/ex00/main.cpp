#include "ClapTrap.hpp"

int main()
{
  ClapTrap clap("Bob");

  clap.attack("Enemy");
  clap.takeDamage(5);
  clap.takeDamage(5);
  clap.takeDamage(5);
  clap.beRepaired(3);
  clap.attack("Another Enemy");

  std::cout << "--------------" << std::endl;

  ClapTrap clap3("John");
  clap3.takeDamage(3);
  clap3.attack("Enemy");
  clap3.beRepaired(5);

  return 0;
}