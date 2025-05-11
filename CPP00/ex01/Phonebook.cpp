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

bool Phonebook::add()
{
	std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
	std::string darkest_secret;
	while(1)
	{
		std::cout << "氏名を入力してください: ";
		if (!std::getline(std::cin, first_name)){
			if (std::cin.eof()) {
				std::cout << "\n入力が終了しました (Ctrl+D)。プログラムを終了します。" << std::endl;
			} else {
				std::cout << "\n入力エラーが発生しました。プログラムを終了します。" << std::endl;
			}
			return false;
		}
		if (isNotEmptyOrOnlyWhitespace(first_name))
			break;
	}
	while(1)
	{
		std::cout << "苗字を入力してください: ";
		if (!std::getline(std::cin, last_name)){
			if (std::cin.eof()) {
				std::cout << "\n入力が終了しました (Ctrl+D)。プログラムを終了します。" << std::endl;
			} else {
				std::cout << "\n入力エラーが発生しました。プログラムを終了します。" << std::endl;
			}
			return false;
		}
		if (isNotEmptyOrOnlyWhitespace(last_name))
			break;
	}
	while(1)
	{
		std::cout << "ニックネームを入力してください: ";
		if (!std::getline(std::cin, nickname)){
			if (std::cin.eof()) {
				std::cout << "\n入力が終了しました (Ctrl+D)。プログラムを終了します。" << std::endl;
			} else {
				std::cout << "\n入力エラーが発生しました。プログラムを終了します。" << std::endl;
			}
			return false;
		}
		if (isNotEmptyOrOnlyWhitespace(nickname))
			break;
	}
	while(1)
	{
		std::cout << "電話番号を入力してください: ";
		if (!std::getline(std::cin, phone_number)){
			if (std::cin.eof()) {
				std::cout << "\n入力が終了しました (Ctrl+D)。プログラムを終了します。" << std::endl;
			} else {
				std::cout << "\n入力エラーが発生しました。プログラムを終了します。" << std::endl;
			}
			return false;
		}
		if (isNotEmptyOrOnlyWhitespace(phone_number))
			break;
	}
	while(1)
	{
		std::cout << "DarkestSecretを入力してください: ";
		if (!std::getline(std::cin, darkest_secret)){
			if (std::cin.eof()) {
				std::cout << "\n入力が終了しました (Ctrl+D)。プログラムを終了します。" << std::endl;
			} else {
				std::cout << "\n入力エラーが発生しました。プログラムを終了します。" << std::endl;
			}
			return false;
		}
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
	return true;
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
	std::cout << "|" << std::right << std::setw(10) << "DarkestSecret";
	std::cout << "|" << std::endl;
	std::cout << "|" << std::right << std::setw(10) << index + 1;
	this->contacts[index].display_all();
}
