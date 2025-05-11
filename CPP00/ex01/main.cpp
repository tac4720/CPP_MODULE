#include <string>
#include <iostream>
#include <cstdlib>
#include "Phonebook.hpp"

int main(int argc, char **argv)
{
	Phonebook 	phonebook;
	std::string command;
	int			index;
	while(1)
	{
		std::cout << "コマンドを入力してください: "; 
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			phonebook.add();
		}
		else if (command == "SEARCH")
		{
			phonebook.display();
			while(1){
				std::cout << "表示したいインデックスを入力してください";
				std::getline(std::cin, command);
				index = std::atoi(command.c_str());
				if (index - 1 < phonebook.get_num_contacts() && index - 1 >= 1)
					break;
			}
			phonebook.display_content(index - 1);
		}
		else if (command == "EXIT")
		{
			break;
		}
	}
	return 0;
}

