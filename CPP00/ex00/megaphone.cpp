#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	for (int i = 1; i < argc; i++)
	{
		std::string name = argv[i];
		for (std::string::size_type j = 0; j < name.length(); j++)
			name[j] = std::toupper(name[j]);
		if (argc == 1 || i == argc - 1)
		{
			std::cout << name;
		}
		else
		{
			std::cout << name + " ";
		}
	}
	return 0;
}
