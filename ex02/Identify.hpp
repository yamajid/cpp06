/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:32:02 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/05 21:57:38 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base{
    public:
        virtual ~Base();
        Base* generate(void);
        void identify(Base* p);
        void identify(Base& p);
};