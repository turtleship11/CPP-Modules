#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();

        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();

        club.setType("some other type of club"); // key code
        jim.attack();
    }

    return 0;
}

//2️⃣ 왜 HumanA는 reference인가
//Weapon& weapon;
//항상 무기 있음
//NULL 불가능
//더 안전

//왜 HumanB는 pointer인가
//Weapon* weapon;
//무기 없을 수도 있음
//나중에 설정 가능
//NULL 가능