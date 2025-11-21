#include "Contact.hpp"


void Contact::a(std::string value[])
{
    this->first_name = value[0];
    this->last_name = value[1];
    this->nickname = value[2];
    this->phone_number = value[3];
    this->darkest_secret = value[4];
    
}
std::string Contact::geta(void) const
{
    return this->first_name;
}
std::string Contact::getb(void) const
{
    return this->last_name;
}
std::string Contact::getc(void) const
{
    return this->nickname;
}
std::string Contact::getd(void) const
{
    return this->phone_number;
}
std::string Contact::gete(void) const
{
    return this->darkest_secret;
}





