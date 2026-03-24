#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club"); // create weapon

        HumanA bob("Bob", club); // create HumanA
        bob.attack();

        club.setType("some other type of club"); //weapon type change
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim"); //create HumanB no weapon
        jim.setWeapon(club);  // set weapon (ptr)
        jim.attack();

        club.setType("some other type of club"); // key code
        jim.attack();
    }

    return 0;
}

//Human A -> ref
//Weapon& weapon;
//always weapon
// no NULL
//no safe

//HumanB ptr
//Weapon* weapon;
//not always weapon
//NULL okay

