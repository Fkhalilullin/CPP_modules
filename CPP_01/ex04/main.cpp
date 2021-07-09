/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:24:25 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 18:55:29 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace(std::string src_line, std::string s1, std::string s2)
{
	size_t		pos = 0;
	size_t		len_s1 = s1.length();
	std::string	tmp;

	if (!s1.compare(s2))
		return (src_line);
	while ((pos = src_line.find(s1, pos)) && (pos != std::string::npos))
	{
		src_line.erase (pos, len_s1);
		src_line.insert (pos, s2);
	}
	return (src_line);
}

void	replace_file(std::ifstream& ifs, std::ofstream& ofs,
			std::string s1, std::string s2)
{
	std::string	src_line;
	std::string	new_line;

	while (ifs.good())
	{
		std::getline (ifs, src_line);
		if (ifs.good())
		{
			new_line = replace(src_line, s1, s2);
			ofs << new_line << std::endl;
		}
	}
	return ;
}

int main(int ac, char **av)
{
    std::ifstream ifs;
    std::ofstream ofs;
    std::string file_name;
    
    if (ac != 4)
    {
        std::cout << "Error: Wrong input" << std::endl;
        return (-1);
    }
    ifs.open(av[1], std::ifstream::in);
    if (!ifs.is_open())
    {
        std::cout << "Error: Wrong input file " << std::endl;
        return (-1);
    }
    file_name = std::string(av[1]).append(".replace");
    ofs.open(file_name.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!ofs.is_open())
	{
		ifs.close();
		std::cout << "Error: Wrong output file "<< std::endl;
		return (-1);
	}
	replace_file(ifs, ofs, av[2], av[3]);
	ifs.close();
	ofs.close();
	return (0);
    return (0);
}