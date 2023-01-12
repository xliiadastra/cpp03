#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "[Default] child constructor called" << std::endl;
    this->name = "[Default]";
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap( std::string name )
{
    std::cout << '[' << name << ']' << " child constructor called" << std::endl;
    this->name = name;   
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& obj )
{
	std::cout << "child Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap &orig)
{
    std::cout << "child Copy assignment operator called" << std::endl;

    name = orig.getName();
    hitPoint = orig.getHp();
    energyPoint = orig.getEnergy();
    attackDamage = orig.getDamage();
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << '[' << this->name << ']' << " child Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "guardGate keeper mode" << std::endl;
}
