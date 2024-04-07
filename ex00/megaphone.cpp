/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/04/07 19:47:33 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //input output

//cout == character out

// std::endl prints a new line character and flushes the output buffer (makes
// it immediately visible);

// In C++, av is a pointer to an array of strings (char **av), and it should 
// not be compared directly with a single character like '\0'.

// j starts at -1 to skip the program name

int main(int ac, char **av)
{
	int i = 0;
	int j = -1;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (ac > 1 && av != nullptr && av[++j])
	{
		i = -1;
		while (j > 0 && av[j][++i])
			std::cout << (char)std::toupper(av[j][i]);
	}
	std::cout << std::endl;
	return (0);
}