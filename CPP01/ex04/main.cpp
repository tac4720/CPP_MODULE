#include "Sed.hpp"

int main(void){
	std::string filename = "test.txt";
	std::string s1 = "hello";
	std::string s2 = "world";

	Sed sed(s1, s2, filename);

	sed.process();
}
