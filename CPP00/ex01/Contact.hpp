#ifndef CONTACT_CPP
# define CONTACT_CPP

#include <iostream>
#include <string>


class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    int phone_number;
    std::string first_name;
    std::string darkest_secret;
public:
    void add_contact();
    void search_contact();
};


#endif