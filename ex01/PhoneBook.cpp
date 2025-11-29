#include "PhoneBook.hpp"

void PhoneBook::set_contact(int count, std::string value[])
{
    contacts[count].set_field(value);
}

std::string PhoneBook::firstname_mod(int i)
{
    return (contacts[i].geta());
}
std::string PhoneBook::lastname_mod(int i)
{
    return (contacts[i].getb());
}
std::string PhoneBook::nickname_mod(int i)
{
    return (contacts[i].getc());
}

void PhoneBook::get_contact(std::string fields[], int index)
{
    std::cout << fields[0] << " : " << contacts[index].get_firstname() << std::endl;
    std::cout << fields[1] << " : " << contacts[index].get_lastname() << std::endl;
    std::cout << fields[2] << " : " << contacts[index].get_nickname() << std::endl;
    std::cout << fields[3] << " : " << contacts[index].get_phone() << std::endl;
    std::cout << fields[4] << " : " << contacts[index].get_secret() << std::endl;
}