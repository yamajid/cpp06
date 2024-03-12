/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:34:54 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/12 00:41:45 by yamajid          ###   ########.fr       */
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

//bool j = false;

    // for (size_t i = 0 ; i < str.length(); i++)
    // {
    //     if (i == 0 && str[i] == '-' || str[i] == '+' || str[i] == '.'){
    //         if (str[i] == '.')
    //             j = true;  
    //         i++;
    //     }
    //     if (str[i] == 'f' && (i != str.length() - 1 ||  j == false))
    //         return 0;
    //     else if (str[i] == '.'){
    //         if (j == true)
    //             return 0;
    //         j = true;
    //     }
    //     else if (!isdigit(str[i]))
    //         return 0;
    // }
    // return 1;