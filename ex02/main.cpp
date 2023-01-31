#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap a("Zion.T");

	a.setDamage(3);
	a.attack("Simon");
	a.takeDamage(7);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.attack("Tom");
	a.beRepaired(2);
	a.attack("Carol");

	FragTrap c("Scv");
	FragTrap b("Marin");

	c.attack(b.getName());
	b.takeDamage(c.getDamage());
	c.beRepaired(2);

	c.attack(b.getName());
	b.takeDamage(c.getDamage());
	c.beRepaired(4);

	c.attack(b.getName());
	b.takeDamage(c.getDamage());

	c.attack(b.getName());
	b.takeDamage(c.getDamage());

	c.highFivesGuys();

	return 0;
}
