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

ClapTrap::ClapTrap( const ClapTrap& obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap()
{
    std::cout << '[' << this->name << ']' << " Destructor called" << std::endl;
}

ClapTrap&  ClapTrap::operator=( const ClapTrap& orig )
{
    std::cout << "Copy assignment operator called" << std::endl;

    name = orig.getName();
    hitPoint = orig.getHp();
    energyPoint = orig.getEnergy();
    attackDamage = orig.getDamage();
    return (*this);
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

void ClapTrap::setDamage(unsigned int damage)
{
    this->attackDamage = damage;
}

void ClapTrap::attack(const std::string& target)
{
    if (getEnergy() == 0 || getHp() == 0)
    {
        std::cout << "ClapTrap [" << getName() << "] have not enough energy or Hp!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap [" << getName() << ']' <<  " attaks " \
                << '[' << target << ']' << ", casuing [" \
                << getDamage() << "] points of damage!" << std::endl;
    energyPoint--;
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
        hitPoint -= amount;
    }
    else
    {
        std::cout << "ClapTrap [" << getName() << ']' <<  " takes " \
                << amount << " points of damage!" << std::endl;
        hitPoint -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergy() == 0 || getHp() == 0)
    {
        std::cout << "ClapTrap [" << getName() << "] have not enough energy or Hp!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap [" << getName() << ']' << " got repaired " \
                << amount << " points!" << std::endl;
    hitPoint += amount;
    energyPoint--;
}
