#include "phoneBook.hpp"
#include <iostream>

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
    std::getline(std::cin, fn);

    std::cout << "Last name: ";
    std::getline(std::cin, ln);

    std::cout << "Nickname: ";
    std::getline(std::cin, nn);

    std::cout << "Phone number: ";
    std::getline(std::cin, pn);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, ds);

    contacts[index].setContact(fn, ln, nn, pn, ds);

    index = (index + 1) % 8;

    if (total < 8)
        total++;
}

void PhoneBook::searchContact()
{
    for (int i = 0; i < total; i++)
        contacts[i].displayShort(i);

    std::cout << "Choose index: ";

    int i;
    std::cin >> i;
    std::cin.ignore();

    if (i >= 0 && i < total)
        contacts[i].displayContact();
    else
        std::cout << "Invalid index\n";
}