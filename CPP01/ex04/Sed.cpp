#include "Sed.hpp"
#include <string>

Sed::Sed(const std::string &s1, const std::string &s2, const std::string &filename)
    : s1(s1), s2(s2), filename(filename) {}

std::string Sed::replace(std::string &line){
	size_t pos = 0;
	size_t found = 0;

	while((found = line.find(s1, pos)) != std::string::npos){
		line.erase(found, s1.length());
		line.insert(found, s2);
		pos += found + s2.length();
	}
	return line;
}

bool Sed::process(void){
	std::ifstream infile(filename);
	
	if (!infile){
		std::cerr << "開けませんでした" << std::endl;
		return false;
	}
	std::ofstream outfile(filename + ".replace");
	if (!outfile){
		std::cerr << "開けませんでした" << std::endl;
		infile.close();
		return false;
	}
	std::string line;
    while(std::getline(infile, line)){
		line = Sed::replace(line);
		if ()
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();
	return true;
}

