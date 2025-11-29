/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:15:33 by aalimous          #+#    #+#             */
/*   Updated: 2025/11/29 16:46:38 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib> 

class PhoneBook {

    private:
        Contact contacts[8];

    public:
        void set_contact(int count, std::string value[]);
        std::string firstname_mod(int i);
        std::string lastname_mod(int i);
        std::string nickname_mod(int i);
        void get_contact(std::string fields[], int index);
};
#endif