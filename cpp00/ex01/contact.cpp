#include "Contact.hpp"
#include <iostream> //std::cout
#include <iomanip> //std::setw

void Contact::setContact(std::string fn, std::string ln, std::string nn,
                         std::string pn, std::string ds)
{
    firstName = fn;
    lastName = ln;
    nickName = nn;
    phoneNumber = pn;
    darkestSecret = ds;
}

void Contact::displayContact() const //don't change inner data
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

static std::string formatField(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::displayShort(int index) const
{
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << formatField(firstName) << "|";
    std::cout << std::setw(10) << formatField(lastName) << "|";
    std::cout << std::setw(10) << formatField(nickName) << std::endl;
}