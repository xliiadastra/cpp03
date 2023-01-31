#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap a("Zion.T");

	a.setDamage(3);
	a.attack("Simon");
	a.takeDamage(a.getDamage());

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

	ScavTrap b("Marin");
	ScavTrap c("Scv");

	b.attack(c.getName());
	c.takeDamage(b.getDamage());
	
	b.beRepaired(2);
	
	b.attack(c.getName());
	c.takeDamage(b.getDamage());
	c.guardGate();
	
	b.attack(c.getName());
	c.takeDamage(b.getDamage());
	b.attack(c.getName());
	c.takeDamage(b.getDamage());
	c.guardGate();

	b.attack(c.getName());
	c.takeDamage(b.getDamage());
	c.guardGate();

	return 0;
}
