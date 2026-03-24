#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    weapon = NULL; //ptr
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon; //ptr
}

void HumanB::attack()
{
    if (weapon) //null check
        std::cout << name << " attacks with their "
                  << weapon->getType() << std::endl; 
    else
        std::cout << name << " has no weapon" << std::endl;
}
