#include "ClapTrap.hpp"

int main()
{
    ClapTrap    a("robot");
    ClapTrap    b("rabot");

    a.attack(b.getName());
    a.takeDamage(10);
    a.beRepaired(1);

    return (0);
}
