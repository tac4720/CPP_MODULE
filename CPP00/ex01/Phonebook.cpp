#include "Phonebook.hpp"
#include <iostream>

bool isNotEmptyOrOnlyWhitespace(const std::string& str) {
    if (str.empty()) 
        return false;

    bool allWhitespace = std::all_of(str.begin(), str.end(), ::isspace);
    if (allWhitespace) 
        return false;

    return true;
}

Phonebook::Phonebook() : num_contacts(0), oldest_index(0){

}

int Phonebook::get_num_contacts()
{
	return num_contacts;
}

void Phonebook::add()
{
	std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
	std::string darkest_secret;
	while(1)
	{
		std::cout << "氏名を入力してください: ";
		std::getline(std::cin, first_name);
		if (isNotEmptyOrOnlyWhitespace(first_name))
			break;
	}
	while(1)
	{
		std::cout << "苗字を入力してください: ";
		std::getline(std::cin, last_name);
		if (isNotEmptyOrOnlyWhitespace(last_name))
			break;
	}
	while(1)
	{
		std::cout << "ニックネームを入力してください: ";
		std::getline(std::cin, nickname);
		if (isNotEmptyOrOnlyWhitespace(nickname))
			break;
	}
	while(1)
	{
		std::cout << "電話番号を入力してください: ";
		std::getline(std::cin, phone_number);
		if (isNotEmptyOrOnlyWhitespace(phone_number))
			break;
	}
	while(1)
	{
		std::cout << "DarkestSecretを入力してください: ";
		std::getline(std::cin, darkest_secret);
		if (isNotEmptyOrOnlyWhitespace(darkest_secret))
			break;
	}
	Contact new_contact;
	new_contact.setFirstName(first_name);
	new_contact.setLastName(last_name);
	new_contact.setNickname(nickname);
	new_contact.setPhoneNumber(phone_number);
	new_contact.setDarkestSecret(darkest_secret);
	if (num_contacts == 8)
	{
		for (int i = 0; i < 7; i++)
		{
			this->contacts[i] = this->contacts[i + 1];
		}
		this->contacts[7] = new_contact;
	}
	else
	{
		this->contacts[num_contacts] = new_contact;
		this->num_contacts++;
	}
}

void Phonebook::display()
{
	int iterator = 0;
	std::cout << "|" << std::right << std::setw(10) << "INDEX";
	std::cout << "|" << std::right << std::setw(10) << "FIRST_NAME";
	std::cout << "|" << std::right << std::setw(10) << "LAST_NAME";
	std::cout << "|" << std::right << std::setw(10) << "NICKNAME";
	std::cout << "|" << std::endl;
	while(iterator < this->num_contacts)
	{
		std::cout << "|" << std::right << std::setw(10) << iterator + 1;
		this->contacts[iterator].display();
		iterator++;
	}
}

void Phonebook::display_content(int index)
{
	std::cout << "|" << std::right << std::setw(10) << "INDEX";
	std::cout << "|" << std::right << std::setw(10) << "FIRST_NAME";
	std::cout << "|" << std::right << std::setw(10) << "LAST_NAME";
	std::cout << "|" << std::right << std::setw(10) << "NICKNAME";
	std::cout << "|" << std::endl;
	std::cout << "|" << std::right << std::setw(10) << index + 1;
	this->contacts[index].display_all();
}
