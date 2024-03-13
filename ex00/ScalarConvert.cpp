/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:42:44 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/13 21:15:22 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert() {
}


ScalarConvert::~ScalarConvert() {
}

ScalarConvert & ScalarConvert::operator=(ScalarConvert const & other) {
    if (this != &other){}
    return *this;
}

ScalarConvert::ScalarConvert(ScalarConvert const & obj) {
    *this = obj;
}

void print_nan(){
    std::cout << "char: impossible " << std::endl;
    std::cout << "int: impossible " << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void print_inf(){
    std::cout << "char: impossible " << std::endl;
    std::cout << "int: impossible " << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" << std::endl;
}

void print__inf(){
    std::cout << "char: impossible " << std::endl;
    std::cout << "int: impossible " << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}

int is_digit(std::string & str){
    size_t i = 0;
    if (str[i] == '-' || str[i] == '+' || isdigit(str[i]))
    {
        for (i = 1; i < str.length(); i++)
        {
            if (!(isdigit(str[i])))
                    return 0;
        }
    }
    else
        return 0;
    return 1;
}

void is_int(std::string & str)
{
    double d = 0;

    d = std::strtod(str.c_str(), NULL);
    if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
    {
        std::cout << "char: impossible " << std::endl;
        std::cout << "int: impossible " << std::endl;
        std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;
    }
    else
    {
        if (d >= 32 && d <= 126)
            std::cout << "char: " << "'" << static_cast<char>(d) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;
    }
}

void is_char(std::string & str){
    if (isprint(str[0]) || isdigit(str[0])){
        if (isdigit(str[0]))
            is_int(str);
        else
        {
            std::cout << "char: " << "'" << str << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
            std::cout << "float: " << std::setprecision(1) << std::fixed <<  static_cast<float>(str[0]) << "f" << std::endl;
            std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(str[0]) << std::endl;
        } 
    }
    else
        std::cout << "char: Non displayable" << std::endl;
}
int parse_float(std::string & str)
{
    int j = 0;
    size_t i;

    for (i = 0 ; i < str.length(); i++)
    {
        if (i == 0 && (str[i] == '-' || str[i] == '+' || std::isdigit(str[i])))
            i++;
        if (str[i] == '.')
        {
            if (j == 1)
                return -1;
                j++;
        }
        if (((str[i] == 'f' && (i == str.length() - 1)) && j == 1) || (str[i] == 'f' && (i == str.length() - 1)))
            return 1;
        else if ((std::isdigit(str[i]) && (i == str.length() - 1)) && j == 1)
            return 0;
    }
    return -1;
}

void check_for_value_inrange(double d, int i){
    if (i == 1){
            if (static_cast<float>(d) == static_cast<int>(d)){
                std::cout << "float: " << std::setprecision(7) << static_cast<float>(d) << ".0f" << std::endl;
                std::cout << "double: " << std::setprecision(15) << d << ".0" << std::endl;
            }
            else
            {
                std::cout << "float: " << std::setprecision(7) << static_cast<float>(d) << "f" << std::endl;
                std::cout << "double: " << std::setprecision(15) << d << std::endl;
            }
            
        }
        else{
            if (static_cast<double>(d) == static_cast<int>(d)){
                std::cout << "float: " << std::setprecision(7) << static_cast<float>(d) << ".0f" << std::endl;
                std::cout << "double: " << std::setprecision(15) << d << ".0" << std::endl;
            }
            else
            {
                std::cout << "float: " << std::setprecision(7) << static_cast<float>(d) << "f" << std::endl;
                std::cout << "double: " << std::setprecision(15) << d << std::endl;
            }
        }
}

void check_for_value_outrange(double d, int i){
    if (d >= 32 && d <= 126)
            std::cout << "char: " << "'" << static_cast<char>(d) << "'" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
    if (i == 1){
        if (static_cast<float>(d) == static_cast<int>(d)){
            std::cout << "int: " << static_cast<int>(d) << std::endl;
            std::cout << "float: " << std::setprecision(7) << static_cast<float>(d) << ".0f" << std::endl;
            std::cout << "double: " << std::setprecision(15) << d << ".0" << std::endl;
        }
        else{
            std::cout << "int: " << static_cast<int>(d) << std::endl;
            std::cout << "float: " << std::setprecision(7) << static_cast<float>(d) << "f" << std::endl;
            std::cout << "double: " << std::setprecision(15) << d << std::endl;
        }
    }
    else{
        if (static_cast<double>(d) == static_cast<int>(d)){
            std::cout << "int: " << static_cast<int>(d) << std::endl;
            std::cout << "float: " << std::setprecision(7) << static_cast<float>(d) << ".0f" << std::endl;
            std::cout << "double: " << std::setprecision(15) << d << ".0" << std::endl;
        }
        else{
            std::cout << "int: " << static_cast<int>(d) << std::endl;
            std::cout << "float: " << std::setprecision(7) << static_cast<float>(d) << "f" << std::endl;
            std::cout << "double: " << std::setprecision(15) << d << std::endl;
        }
    }
}

void is_float_or_double(std::string & str, int i){
    double d = 0;

    
    d = std::strtod(str.c_str(), NULL);
    if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
    {
        std::cout << "char: impossible " << std::endl;
        std::cout << "int: impossible " << std::endl;
        check_for_value_inrange(d, i);
    }
    else
        check_for_value_outrange(d, i);
}

int is_string(std::string & str){
    size_t i = 0;
    if (str.length() == 1 && str[0] == ' ')
        return 1;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] != '.' && str[i] != 'f' && !isdigit(str[i]) && str[i] != '-' && str[i] != '+')
            return 0;
    }
    return 1;
}

void ScalarConvert::convert(std::string & str){
        
        if (str.empty()){
            std::cerr << "Error: invalid input" << std::endl;
            return ;
        }       
        if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
        {
            if (str == "nan" || str == "nanf")
                print_nan();
            else if (str == "+inf" || str == "+inff")
                print_inf();
            else if (str == "-inf" || str == "-inff")
                print__inf();
            return ;
        }
        if (str.length() == 1)
            is_char(str);
        else if (is_string(str) == 0){
            std::cerr << "Error: invalid input" << std::endl;
            return ;
        }
        else if (is_digit(str) == 1)
            is_int(str);
        else if (parse_float(str) == 1)
            is_float_or_double(str, 1);
        else if (parse_float(str) == 0)
            is_float_or_double(str, 0);
        else
            std::cerr << "Error: invalid input" << std::endl;
        return ;
}