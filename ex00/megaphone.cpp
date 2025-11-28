/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalimous <aalimous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:15:13 by aalimous          #+#    #+#             */
/*   Updated: 2025/11/28 12:16:57 by aalimous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        for (size_t i = 0; i < str.size(); i++)
            std::cout << (char)std::toupper(str[i]);
    }
    std::cout << std::endl;
}