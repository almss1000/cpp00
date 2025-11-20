#include "Contact.hpp"


void Contact::a(std::string value)
{
    this->first_name = value;
}
void Contact::b(std::string value)
{
    this->last_name = value;
}
void Contact::c(std::string value)
{
    this->nickname = value;
}
void Contact::d(std::string value)
{
    this->phone_number = value;
}
void Contact::e(std::string value)
{
    this->darkest_secret = value;
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





