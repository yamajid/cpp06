/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seria.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:35:33 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/09 23:32:45 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Serialize{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        Serialize();
        ~Serialize();
        Serialize(Serialize const & src);
        Serialize & operator=(Serialize const & src);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};