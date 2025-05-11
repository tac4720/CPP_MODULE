#include "Contact.hpp"

std::string format(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(const std::string& name) {
    firstName = name;
}

void Contact::setLastName(const std::string& name) {
    lastName = name;
}

void Contact::setNickname(const std::string& name) {
    nickname = name;
}

void Contact::setPhoneNumber(const std::string& number) {
    phoneNumber = number;
}

void Contact::setDarkestSecret(const std::string& secret){
	darkestSecret = secret;
}

void Contact::display(){
	std::cout << "|" << std::right << std::setw(10) << format(firstName);
	std::cout << "|" << std::right << std::setw(10) << format(lastName);
	std::cout << "|" << std::right << std::setw(10) << format(nickname);
	std::cout << "|" << std::endl;
}

void Contact::display_all(){
	std::cout << "|" << std::right << std::setw(10) << format(firstName);
	std::cout << "|" << std::right << std::setw(10) << format(lastName);
	std::cout << "|" << std::right << std::setw(10) << format(nickname);
	std::cout << "|" << std::right << std::setw(10) << format(darkestSecret);
	std::cout << "|" << std::endl;
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
	return darkestSecret;
}
