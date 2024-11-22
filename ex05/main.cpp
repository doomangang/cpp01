/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:51:45 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/22 18:44:29 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// void leakc(){
// 	system("leaks Harl");
// }

int main(void){
	Harl test;

	std::cout << "Test DEBUG:\n";	test.complain("DEBUG");
	std::cout << "Test INFO:\n";	test.complain("INFO");
	std::cout << "Test WARNING:\n";	test.complain("WARNING");
	std::cout << "Test ERROR:\n";	test.complain("ERROR");
}