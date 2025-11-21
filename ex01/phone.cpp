#include "phone.hpp"

int check_command(std::string command)
{
    if (command == "ADD" || command == "SEARCH" || command == "EXIT")
        return (1);
    return (0);
}

int check_space(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isalnum(str[i]))
        {
            std::cerr << str[i] << std::endl;
            return (0);
        }
    }
    return (1);
}

int main()
{
    PhoneBook phoneb;
    std::string command;
    std::string value[5];
    std::string fields[5];
    fields[0] = "first_name";
    fields[1] = "last_name";
    fields[2] = "nickname";
    fields[3] = "phone_number";
    fields[4] = "darkest_secret";
    int count = 0;
    while (1)
    {
        std::getline(std::cin, command);
        if (std::cin.eof())
        {
            std::cout << "End of input reached (Ctrl+D detected)." << std::endl;
            return (0);
        }
        if (!check_command(command))
        {
            std::cout << "error command" << std::endl;
            continue;
        }
        if (command == "ADD")
        {
            for (int i = 0; i < 5; i++)
            {
                while (1)
                {
                    std::cout << fields[i] << " : ";
                    std::getline(std::cin, value[i]);
                    if (value[i].empty() || !check_space(value[i]))
                    {
                        std::cout << fields[i] << "is empty\n";
                        continue;
                    }
                    else
                    {
                        break;
                    }
                    if (std::cin.eof())
                    {
                        std::cout << "End of input reached (Ctrl+D detected)." << std::endl;
                        return (0);
                    }
                }
            }
            phoneb.contacts[count].a(value);
            if (count == 7)
                count = 0;
            else
                count++;
        }
        for (int i = 0; i < 8; i++)
        {
            std::cout << phoneb.contacts[i].geta() << std::endl;
            std::cout << phoneb.contacts[i].getb() << std::endl;
            std::cout << phoneb.contacts[i].getc() << std::endl;
            std::cout << phoneb.contacts[i].getd() << std::endl;
            std::cout << phoneb.contacts[i].gete() << std::endl;
            std::cout << "--------------------------------------" << std::endl;
        }
    }
    return (0);
}