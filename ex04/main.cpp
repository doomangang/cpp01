#include "FtSed.hpp"

int check_file(cbar *filename);

int main(int ac, char **av)
{
	if (ac != 4)
		return (FAIL);
	if (!std::strlen(av[1]) || !s1.length() || !s2.length() )
		return (FAIL);
	inFileStream.open(av[1]);
	if (inFileStream.fail())
		return (FAIL);
	outFile = av[1];
	outFile.append(".replace");
	outFileStream.open(outFile);
	if (outFileStream.fail())
		return (FAIL);
}

int check_file(char *filename)
{

}