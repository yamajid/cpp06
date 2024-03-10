/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:43:24 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/10 19:56:01 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <exception>
#include <cctype>

class ScalarConvert{
    private:
        ScalarConvert();
    public:
        class ScalarConvertException : public std::exception{
            public:
            virtual const char *what() const throw();
        };
        ~ScalarConvert();
        ScalarConvert(ScalarConvert const & src);
        ScalarConvert & operator=(ScalarConvert const & src);
        static void convert(std::string & str);
};