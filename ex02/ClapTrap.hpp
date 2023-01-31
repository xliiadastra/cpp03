#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
    std::string     name;
    unsigned int    hitPoint;
    unsigned int    energyPoint;
    unsigned int    attackDamage;

public:
    ClapTrap();
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap& obj );
    virtual ~ClapTrap();
    ClapTrap&   operator=( const ClapTrap& orig );

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void            setDamage(unsigned int damage);
    std::string     getName(void) const;
    unsigned int    getHp(void) const;
    unsigned int    getEnergy(void) const;
    unsigned int    getDamage(void) const;
};

#endif