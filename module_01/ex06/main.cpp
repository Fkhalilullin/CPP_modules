/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:46:10 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 19:52:47 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen 		igor;
	std::string	level;

	if (ac != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (-1);
	}
	level = std::string(av[1]);
	if (!level.compare("DEBUG"))
		igor.complain(1);
	else if (!level.compare("INFO"))
		igor.complain(2);
	else if (!level.compare("WARNING"))
		igor.complain(3);
	else if (!level.compare("ERROR"))
		igor.complain(4);
	else
	{
		std::cout << "[ Probably complaining about insignificant problems ]";
		std::cout << std::endl;
	}
	return (0);
    return (0);
}