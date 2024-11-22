#ifndef FTSED_HPP
# define FTSED_HPP

#include <iostream>
#include <fstream>

#define FAIL 1
#define SUCCESS 0

std::string     filename;
std::string     s1;
std::string     s2;
std::string     outFile;

std::ifstream   inFileStream;
std::ofstream   outFileStream;

void    replace();
int 	errorMessage(const std::string&);

#endif
