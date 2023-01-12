#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap( std::string name );
    FragTrap( const FragTrap& obj);
 	FragTrap& operator=(const FragTrap& orig);
    ~FragTrap();

    void    highFivesGuys(void);
};

#endif