#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private: // only inside class
    Contact contacts[8];
    int index;
    int total;

public: // able to use outer class
    PhoneBook();
    void addContact();
    void searchContact();
};

#endif