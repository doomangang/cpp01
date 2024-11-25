/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtSed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:51:29 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/22 18:35:04 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSED_HPP
# define FTSED_HPP

#include <iostream>
#include <fstream>

//status code
#define FAIL 1
#define SUCCESS 0

//variables
std::string     filename;
std::string     s1;
std::string     s2;
std::string     outFile;

//file stream variables
std::ifstream   inFileStream;
std::ofstream   outFileStream;

//functions
void    replace();
int 	errorMessage(const std::string&);

#endif
