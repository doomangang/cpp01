#pragma once

#include <iostream>
#include <fstream>

#define FAIL 1
#define SUCCESS 0

class FtSed{
private:
	std::string     filename;
	std::string     outFile;
	std::string     s1;
	std::string     s2;
	std::ifstream   inFileStream;
	std::ofstream   outFileStream;
public:
			FtSed(char **av);
			~FtSed();
	int     checkString();
	int     openInFile();
	int     openOutFile();
	void    replace();
};
