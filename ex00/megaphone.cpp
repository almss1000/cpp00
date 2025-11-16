#include <stdio.h> 
#include <iostream>

int main(int ac, char** argv)
{
    if (ac == 1)
    {
        printf("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
        std::cout << "ali" << std::endl;
        return (0);
    }
    int i = 0;
    int k = 1;
    while (argv[k])
    {
        i = 0;
        while (argv[k][i])
        {
            if (argv[k][i] >= 97 && argv[k][i] <= 122)
                argv[k][i] = argv[k][i] - 32;
            i++;
        }
        printf("%s", argv[k]);
        k++;
    }
    printf("\n");
}