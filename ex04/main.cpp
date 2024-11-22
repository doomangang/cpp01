#include "FtSed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		return (errorMessage("filename, s1 or s2 is missing"));

	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (filename.empty() || s1.empty())
		return (errorMessage("filename or s1 is an empty string"));
	if (filename == "sed")
		return (errorMessage("file to replace cannot be an executable 'sed'"));
	inFileStream.open(filename);
	if (inFileStream.fail())
		return (errorMessage("failed to open file: " + filename));

	outFile = filename;
	outFile.append(".replace");
	outFileStream.open(outFile);
	if (outFileStream.fail())
		return (errorMessage("failed to write on file: " + outFile));

	replace();
    return (SUCCESS);
}

void    replace() {
	std::string line;
	while (true)
	{
		std::getline(inFileStream, line);

		size_t idx = 0;
		while (true) {
			idx = line.find(s1, idx);
			if (idx == std::string::npos)
				break;
			line.erase(idx, s1.length());
			line.insert(idx, s2);
			idx += s2.length();
		}
		outFileStream << line;
		if (inFileStream.eof())
			break;
		outFileStream << std::endl;
	}
}

int errorMessage(const std::string& line)
{
	std::cerr << line << std::endl;
	return (FAIL);
}