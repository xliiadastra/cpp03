#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "[Default] constructor called" << std::endl;
    this->name = "[Default]";
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap( std::string name )
{
    std::cout << '[' << name << ']' << " constructor called" << std::endl;
    this->name = name;   
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << '[' << this->name << ']' << " Destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (name);
}

unsigned int ClapTrap::getHp(void) const
{
	return (hitPoint);
}

unsigned int ClapTrap::getEnergy(void) const
{
	return (energyPoint);
}

unsigned int ClapTrap::getDamage(void) const
{
	return (attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
    if (getEnergy() == 0)
    {
        std::cout << "ClapTrap [" << getName() << "] have not enough energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap [" << getName() << ']' <<  " attaks " \
                << '[' << target << ']' << ", casuing [" \
                << getDamage() << "] points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (getHp() == 0)
    {
        std::cout << "ClapTrap [" << getName() << "] already dead." << std::endl;
        return ;
    }
    else if (getHp() <= amount)
    {
        std::cout << "ClapTrap [" << getName() << ']' <<  " takes " \
                << amount << " points of damage and died!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap [" << getName() << ']' <<  " takes " \
                << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergy() == 0)
    {
        std::cout << "ClapTrap [" << getName() << "] have not enough energy!" << std::endl;
        return ;
    }
    this->hitPoint = this->hitPoint + amount;
    std::cout << "ClapTrap [" << getName() << ']' << " got repaired " \
                << amount << " points!" << std::endl;
}
