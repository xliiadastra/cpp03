#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main( void )
{

	// ClapTrap a("Zion.T");
    // ClapTrap b("Simon");

	ScavTrap a("Zion.T");
	ScavTrap b("Simon");	

//	a.setDamage(3);
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

//	a.setDamage(7);
	a.attack(b.getName());
	b.takeDamage(a.getDamage());

	a.beRepaired(2);
	a.attack(b.getName());
	a.guardGate();	
	return 0;
}
