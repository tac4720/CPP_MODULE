#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
	std::string darkestSecret;

public:
    Contact();
    ~Contact();

    void setFirstName(const std::string& name);
    void setLastName(const std::string& name);
    void setNickname(const std::string& name);
    void setPhoneNumber(const std::string& number);
	void setDarkestSecret(const std::string &secret);
	void display();
	void display_all();
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};

#endif

