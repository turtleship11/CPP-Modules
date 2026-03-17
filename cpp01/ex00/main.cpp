#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* z1 = newZombie("HeapZombie");
    z1->announce();

    randomChump("StackZombie");

    delete z1;

    return 0;
}