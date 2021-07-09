/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteressa <mteressa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:15:49 by mteressa          #+#    #+#             */
/*   Updated: 2021/07/09 19:40:42 by mteressa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
    Karen log;
    log.complain("debug");
    log.complain("info");
    log.complain("warning");
    log.complain("error");
    log.complain("lol");   
    return (0);
}
