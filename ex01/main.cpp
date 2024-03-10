/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:37:19 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/10 01:24:40 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main ()
{
    Data *d1; 
    uintptr_t raw = Serialize::serialize(d1);
    Data *d2 = Serialize::deserialize(raw);
    std::cout << d2 << std::endl;
    std::cout << &d1 << std::endl;
    return 0;   
}