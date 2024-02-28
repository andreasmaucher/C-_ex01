/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/02/28 17:16:20 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //input output

using std::cout; //cout == character out

//ready for portugal

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	
	if (ac == 1)
		cout << "LOUD AND UNBEARABLE FEEDBACK NOISE";
	else
	{
		j = 0;
		for (std::string::iterator it=av[i][j].begin(); it!=av[i][j].end(); ++it; j=0)
	}
	return (0);
}