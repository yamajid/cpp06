/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:35:33 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/10 01:20:39 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
    std::string s1;
    int n;
};

class Serialize{
    private:
        Serialize();
    public:
        ~Serialize();
        Serialize(Serialize const & src);
        Serialize & operator=(Serialize const & src);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};