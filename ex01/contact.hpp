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
    void a(std::string value[5]);
    std::string geta(void) const;
    std::string getb(void) const;
    std::string getc(void) const;
    std::string getd(void) const;
    std::string gete(void) const;
};   

#endif 