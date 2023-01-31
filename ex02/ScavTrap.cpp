#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "[Default] child constructor called" << std::endl;
    this->name = "[Default]";
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    this->keeper_mode = false;
}

ScavTrap::ScavTrap( std::string name )
{
    std::cout << '[' << name << ']' << " child constructor called" << std::endl;
    this->name = name;   
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    this->keeper_mode = false;
}

ScavTrap::ScavTrap( const ScavTrap& obj )
{
	std::cout << "child Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &orig)
{
    std::cout << "child Copy assignment operator called" << std::endl;

    name = orig.getName();
    hitPoint = orig.getHp();
    energyPoint = orig.getEnergy();
    attackDamage = orig.getDamage();
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << '[' << this->name << ']' << " child Destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (getEnergy() == 0 || getHp() == 0)
    {
        std::cout << "ScavTrap [" << getName() << "] have not enough energy or Hp!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap [" << getName() << ']' <<  " attaks " \
                << '[' << target << ']' << ", casuing [" \
                << getDamage() << "] points of damage!" << std::endl;
    energyPoint--;
}

void    ScavTrap::guardGate()
{
    if (this->getHp() == 0)
        std::cout << "Cannot enter Gatekeep_mode because there is no HP." << std::endl;
    else if (this->getHp() != 0 && this->keeper_mode == false)
    {
        std::cout << "guardGate keeper mode Start !" << std::endl;
        this->keeper_mode = true;
    }
    else if (this->getHp() != 0 && this->keeper_mode == true)
    {
        std::cout << "already guardGate kerper mode" << std::endl;
    }
}
