#include <stdio.h> 
#include <iostream>

int main(int ac, char** argv)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    std::string str;
    for (int k = 1; k < ac; k++) {
        str = argv[k];
        for (int i = 0; i < str.size(); i++)
            std::cout << (char)std::toupper(str[i]);
    }
}