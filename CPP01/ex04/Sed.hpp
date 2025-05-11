#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <fstream>
#include <iostream>

class Sed {
    private:
	    std::string s1;
        std::string s2;
	    std::string filename;
	    std::string replace(std::string &line);

    public:
	    Sed(const std::string &s1, const std::string &s2, const std::string &filename);
		bool process();
};

#endif
