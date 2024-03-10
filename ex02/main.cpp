/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 02:19:10 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/10 02:05:02 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main()
{
    Base *d;
    Base *f;
    Base *g;
    Base *a = d->generate();
    Base *b = f->generate();
    Base *c = g->generate();
    f->identify(a);
    f->identify(b);
    f->identify(c);

    std::cout << "-------------------" << std::endl;

    g->identify(*a);
    g->identify(*b);
    g->identify(*c);
    delete a;
    delete b;
    delete c;
    return 0;
}