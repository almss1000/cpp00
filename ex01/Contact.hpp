/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalimous <aalimous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:15:20 by aalimous          #+#    #+#             */
/*   Updated: 2025/11/28 12:16:58 by aalimous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
  
#include <iostream>
                                
class Contact {
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    public:
    void set_field(std::string value[5]);
    std::string geta(void) const;
    std::string getb(void) const;
    std::string getc(void) const;
    std::string get_firstname(void) const;
    std::string get_lastname(void) const;
    std::string get_nickname(void) const;
    std::string get_phone(void) const;
    std::string get_secret(void) const;
};   

#endif 