/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:32:04 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/05 21:57:09 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* Base::generate(void){
    srand(time(0));
    int i = rand() % 3;
    switch(i)
    {
        case 0:
            return reinterpret_cast<Base*>(new A);
        case 1:
            return reinterpret_cast<Base*>(new B);
        case 2:
            return reinterpret_cast<Base*>(new C);
        default:
            break;
    }
    return nullptr;
}


void Base::identify(Base*p){
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown Type" << std::endl;
}

void Base::identify(Base& p){
    try{
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e){
        try{
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e){
            try{
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e){
                std::cout << "Unknown Type" << std::endl;
            }
        }
    }
}

Base::~Base(){
    
}
