/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:34:54 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/13 18:02:36 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main(int ac, char **av)
{

    std::string str;
    
    if (ac != 2)
    {
        std::cout << "Usage: ./convert [string]" << std::endl;
        return 1;
    }
    str = av[1];

    try {
        ScalarConvert::convert(str);
    }
    catch (const std::exception &) {
        std::cout << "Error!" << std::endl;
    }
    return 0;
}
