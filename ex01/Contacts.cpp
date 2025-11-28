/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalimous <aalimous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:15:23 by aalimous          #+#    #+#             */
/*   Updated: 2025/11/28 12:16:58 by aalimous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_field(std::string value[])
{
    this->first_name = value[0];
    this->last_name = value[1];
    this->nickname = value[2];
    this->phone_number = value[3];
    this->darkest_secret = value[4];
}
std::string Contact::geta(void) const
{
    std::string s = this->first_name;
    if (s.length() > 10)
    {
        s[9] = '.';
        s = s.substr(0, 10);
    }
    if (s.length() < 10)
        s.insert(0, 10 - s.length(), ' ');
    return s;
}
std::string Contact::getb(void) const
{
    std::string s = this->last_name;
    if (s.length() > 10)
    {
        s[9] = '.';
        s = s.substr(0, 10);
    }
    if (s.length() < 10)
        s.insert(0, 10 - s.length(), ' ');
    return s;
}
std::string Contact::getc(void) const
{
    std::string s = this->nickname;
    if (s.length() > 10)
    {
        s[9] = '.';
        s = s.substr(0, 10);
    }
    if (s.length() < 10)
        s.insert(0, 10 - s.length(), ' ');
    return s;
}
std::string Contact::get_firstname(void) const
{
    return this->first_name;
}
std::string Contact::get_lastname(void) const
{
    return this->last_name;
}
std::string Contact::get_nickname(void) const
{
    return this->nickname;
}
std::string Contact::get_phone(void) const
{
    return this->phone_number;
}
std::string Contact::get_secret(void) const
{
    return this->darkest_secret;
}
