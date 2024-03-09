/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:42:44 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/09 23:29:55 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert() {
}

ScalarConvert::~ScalarConvert() {
}

ScalarConvert & ScalarConvert::operator=(ScalarConvert const & other) {
    (void)other;
    return *this;
}

ScalarConvert::ScalarConvert(ScalarConvert const & obj) {
    *this = obj;
}


const char *ScalarConvert::ScalarConvertException::what() const throw(){
    return "Non displayable";
}

void ScalarConvert::convert(std::string & str){
        size_t pos = 0;
        try{
            int ci = std::stoi(str);
            if (ci >= 32 && ci <= 126)
                std::cout << "char: '" << static_cast<char>(ci) << "'\n";
            else
                throw ScalarConvertException();
        }
        catch (std::exception& e) {
            std::cout << "char: " << "impossible" << std::endl;
        }
        try{
            pos = 0;
            int i = std::stoi(str, &pos);
            if (((i == 0 || i == 1 || i == -1 ) || (i <= std::numeric_limits<int>::max() && i >= std::numeric_limits<int>::min())) && pos == str.length())
                std::cout << "int: " << i << std::endl;
            else
                throw ScalarConvertException();
        }
        catch (std::exception& e) {
            std::cout << "int: impossible" << std::endl;
        }
        try{
            pos = 0;
            float f = std::stof(str, &pos);
            if (f != f)
                std::cout << "float: nanf" << std::endl;
            else if ((std::numeric_limits<float>::max() > f && std::numeric_limits<float>::min() < f) || (f == 0.0f || f == 1.0f || f == -1.0f) && pos == str.length())
                std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
            else
                throw ScalarConvertException();
        }
        catch (std::exception& e) {
            std::cout << "float: impossible" << std::endl;
        }
        try{
            pos = 0;
            double d = std::stod(str, &pos);
            if (d != d)
                std::cout << "double: nan" << std::endl;
            else if ((d == 0.0 || d == 1.0 || d == -1.0) || (d <= std::numeric_limits<double>::max() && d >= std::numeric_limits<double>::min()) && pos == str.length())
                std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
            else
                throw ScalarConvertException();
        }
        catch (std::exception& e) {
            std::cout << "double: impossible" << std::endl;
        }
}