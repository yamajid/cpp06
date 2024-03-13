/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:43:24 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/12 20:42:56 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>


class ScalarConvert{
    private:
        ScalarConvert();
        ScalarConvert(ScalarConvert const & src);
        ~ScalarConvert();
        ScalarConvert & operator=(ScalarConvert const & src);
    public:
        class ScalarConvertException : public std::exception{
            public:
            virtual const char *what() const throw();
        };
        static void convert(std::string & str);
};