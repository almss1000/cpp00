#include "phone.hpp"

int check_command(std::string command)
{
    if (command == "ADD" || command == "SEARCH" || command == "EXIT")
        return (1);
    return (0);
}

int main()
{
    PhoneBook phoneb;
    std::string command;
    std::getline(std::cin, command);
    if (!check_command(command))
    {
        std::cout << "error command" << std::endl;
        return (0);
    }
    if (command == "ADD")
    {
        std::string value;
        std::cout << "first_name :";
        std::getline(std::cin, value);
        phoneb.contacts[0].a(value);
        std::cout << "last_name :";
        std::getline(std::cin, value);
        phoneb.contacts[0].b(value);
        std::cout << "nickname :";
        std::getline(std::cin, value);
        phoneb.contacts[0].c(value);
        std::cout << "phone_number :";
        std::getline(std::cin, value);
        phoneb.contacts[0].d(value);
        std::cout << "darkest_secret :";
        std::getline(std::cin, value);
        phoneb.contacts[0].e(value);
    }
    std::cout << phoneb.contacts[0].geta() << std::endl;
    std::cout << phoneb.contacts[0].getb() << std::endl;
    std::cout << phoneb.contacts[0].getc() << std::endl;
    std::cout << phoneb.contacts[0].getd() << std::endl;
    std::cout << phoneb.contacts[0].gete() << std::endl;
    return (0);
}