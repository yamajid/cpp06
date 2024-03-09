/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seria.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:35:30 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/05 20:29:50 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seria.hpp"

Serialize::Serialize(){
    
}

Serialize::~Serialize(){
    
}

Serialize::Serialize(Serialize const & src){
    *this = src;
}

Serialize & Serialize::operator=(Serialize const & src){
    if (this != &src)
        *this = src;
    return *this;
}

uintptr_t Serialize::serialize(Data* ptr){
    return reinterpret_cast<unsigned int>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}
