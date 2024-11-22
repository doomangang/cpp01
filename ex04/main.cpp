/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:51:31 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/22 20:26:20 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FtSed.hpp"

// void	leakc(){
// 	system("leaks sed");
// }

int main(int ac, char **av)
{
	// check if there's 4 args
	if (ac != 4)
		return (errorMessage("filename, s1 or s2 is missing"));

	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	
	// filename and s1 empty check
	if (filename.empty() || s1.empty())
		return (errorMessage("filename or s1 is an empty string"));
	if (filename == "sed")
		return (errorMessage("file to replace cannot be an executable 'sed'"));

	// open infile stream
	inFileStream.open(filename);
	if (inFileStream.fail())
		return (errorMessage("failed to open file: " + filename));

	// append .replace to outfile name
	outFile = filename;
	outFile.append(".replace");

	// open outfile stream
	outFileStream.open(outFile);
	if (outFileStream.fail())
		return (errorMessage("failed to open outfile: " + outFile));

	replace();
    return (SUCCESS);
}

void    replace() {
	std::string line;
	while (true)
	{
		std::getline(inFileStream, line);

		size_t pos = 0;
		while (true) {
			pos = line.find(s1, pos);
			if (pos == std::string::npos) // find() returns npos when s1 doesn't exist in a line
				break;
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFileStream << line; //write a replaced line to outfile (filename.replace)
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