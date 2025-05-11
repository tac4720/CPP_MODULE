#include <string>
#include <iostream>
#include <cstdlib>
#include "Phonebook.hpp"

int main(void)
{
	Phonebook 	phonebook;
	std::string command;
	int			index;
	while(1)
	{
		std::cout << "コマンドを入力してください: "; 
		if (!std::getline(std::cin, command))
        {
			if (std::cin.eof()) {
				std::cout << "\n入力が終了しました (Ctrl+D)。プログラムを終了します。" << std::endl;
			} else {
				std::cout << "\n入力エラーが発生しました。プログラムを終了します。" << std::endl;
			}
            return 0;
        }
		if (command == "ADD")
		{
			if (!phonebook.add()) {
				return 0;
			}
		}
		else if (command == "SEARCH")
		{
			phonebook.display();
			if (phonebook.get_num_contacts() == 0) {
			} else {
				while(1){
					std::cout << "表示したいインデックスを入力してください: ";
					if (!std::getline(std::cin, command))
					{
						if (std::cin.eof()) {
							std::cout << "\n入力が終了しました (Ctrl+D)。プログラムを終了します。" << std::endl;
						} else {
							std::cout << "\n入力エラーが発生しました。プログラムを終了します。" << std::endl;
						}
						return 0;
					}
					index = std::atoi(command.c_str());
					if (index >= 1 && index <= phonebook.get_num_contacts()) {
						break;
					} else {
						std::cout << "無効なインデックスです" << std::endl;
					}
				}
				phonebook.display_content(index - 1);
			}
		}
		else if (command == "EXIT")
		{
			std::cout << "プログラムを終了します" << std::endl;
			break;
		}
	}
	return 0;
}
