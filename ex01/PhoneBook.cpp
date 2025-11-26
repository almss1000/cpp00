#include "PhoneBook.hpp"

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

int isalldigit(const std::string &s) {
    if (s.empty())
        return (0);

    for (size_t i = 0; i < s.length(); i++) {
        if (!std::isdigit(s[i]))
            return (0);
    }
    return (1);
}

void get_contacts(PhoneBook phoneb, int print, std::string fields[])
{
    int index;
    std::string space = "";
    std::cout << "     index|" << "first name|" << " last name|" << "  nickname" << std::endl;
    if (print < 0)
        return;
    for (int i = 0; i <= print; i++)
    {
        std::cout << space.insert(0, 9, ' ') << i << "|" << phoneb.contacts[i].geta() << "|";
        std::cout << phoneb.contacts[i].getb() << "|";
        std::cout << phoneb.contacts[i].getc() << std::endl;
        space = "";
    }
    std::string geter = "";
    while (1)
    {
        std::cout << "enter index :";
        std::getline(std::cin, geter);
        if (std::cin.eof())
        {
            std::cout << "End of input reached (Ctrl+D detected)." << std::endl;
            return;
        }
        if(!isalldigit(geter) || geter.length() > 1)
        {
            std::cout << "invalid index. Please enter a valid number between 0 and 7." << std::endl;
            continue;
        }
        index = atoi(geter.c_str());
        if (index < 0 || index > print)
        {
            std::cout << "index not found" << std::endl;
            continue;
        }
        std::cout << fields[0] << " : " << phoneb.contacts[index].get_firstname() << std::endl;
        std::cout << fields[1] << " : " << phoneb.contacts[index].get_lastname() << std::endl;
        std::cout << fields[2] << " : " << phoneb.contacts[index].get_nickname() << std::endl;
        std::cout << fields[3] << " : " << phoneb.contacts[index].get_phone() << std::endl;
        std::cout << fields[4] << " : " << phoneb.contacts[index].get_secret() << std::endl;
        return ;
    }
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
    int print = -1;
    while (1)
    {
        std::cout << "enter commad :";
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
            phoneb.contacts[count].set_field(value);
            if (count == 7)
            {
                print = 7;
                count = 0;
            }
            else
                count++;
            if (print < 7)
                print++;
        }
        else if (command == "SEARCH")
        {
            if (print < 0)
            {
                std::cout << "phonebook is empty please add contacts" << std::endl;
                continue;
            }
            get_contacts(phoneb, print, fields);
        }
        if (command == "EXIT")
            return (0);
    }
    return (0);
}