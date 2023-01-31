#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap a("Zion.T");
    ClapTrap b("Simon");

	a.setDamage(3);
	a.attack(b.getName());
	b.takeDamage(a.getDamage());

	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);

	a.setDamage(7);
	a.attack(b.getName());
	b.takeDamage(a.getDamage());

	a.beRepaired(2);
	a.attack(b.getName());
	b.beRepaired(2);

	return 0;
}
