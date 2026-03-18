#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib> //exit

PhoneBook::PhoneBook()
{
    index = 0;
    total = 0;
}

// class is like blueprint

void PhoneBook::addContact()
{
    std::string fn, ln, nn, pn, ds;

    std::cout << "First name: ";
    if (!std::getline(std::cin, fn)) 
		exit(0);

    std::cout << "Last name: ";
    if (!std::getline(std::cin, ln))
		exit(0);
    std::cout << "Nickname: ";
    if (!std::getline(std::cin, nn))
		exit(0);

    std::cout << "Phone number: ";
    if (!std::getline(std::cin, pn))
		exit(0);

    std::cout << "Darkest secret: ";
    if (!std::getline(std::cin, ds))
		exit(0);

    contacts[index].setContact(fn, ln, nn, pn, ds);

    index = (index + 1) % 8;

    if (total < 8)
        total++;
}

void PhoneBook::searchContact()
{
	if (total == 0)
    {
        std::cout << "At least one contact require\n";
        return;
    }
    for (int i = 0; i < total; i++)
        contacts[i].displayShort(i);

    std::cout << "Choose index: ";

    int i;
    if (!(std::cin >> i))
    {
		std::cout << "Invalid index\n";
        if (std::cin.eof())  // EOF check
        {
            exit(0);
        }
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return;
    }

    std::cin.ignore(10000, '\n'); // 10000-> big number for one line

    if (i >= 0 && i < total)
        contacts[i].displayContact();
    else
        std::cout << "Invalid index\n";
}
