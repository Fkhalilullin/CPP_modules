/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:27:30 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/06 21:42:53 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address str - " << &str << std::endl;
    std::cout << "Address stringPTR - " << stringPTR << std::endl;
    std::cout << "Address stringREF - " << &stringREF << std::endl;
    
    std::cout << "str with ptr - " << *stringPTR << std::endl;
    std::cout << "str with ref - " << stringREF << std::endl;
    return (0);
}