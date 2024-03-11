/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:42:44 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/11 02:02:42 by yamajid          ###   ########.fr       */
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


const char *ScalarConvert::ScalarConvertException::what() const throw(){
    return "Non displayable";
}



void cast_to_char(long & i){
    int tmp;
    if (i >= std::numeric_limits<int>::min() && i <= std::numeric_limits<int>::max()){
        tmp = i;
        if (i >= 32 && i <= 126)
        {
            char c = static_cast<char>(i);
            std::cout << "char: " << "'" << c << "'"  <<std::endl;
            return ;
        }
        else
            std::cout << "char: impossible " << std::endl;
    }
    return ;
}


int is_digit(std::string & str){
    int i = 0;
    if (str[i] != '-' && str[i] != '+')
        return 0;
    else
    {
        for (i = 1; i < str.length(); i++)
        {
            if ((!isdigit(str[i])))
                return 0;
        }
    }
    return 1;
}


int is_float(std::string & str){
    int i = 0;
    if (str[i] == '-' || str[i] == '+' || isdigit(str[i]))
    {
        for (i = 1; i < str.length(); i++)
        {
            if ((!isdigit(str[i]) && str[i] != '.'))
            {

                if (str[i] == 'f' || str[i] == 'F')
                    return 1;
                else
                    return 0;
            }
        }   
    }
    else if (str.at(str.length()  ) == 'f' || str.at(str.length()) == 'F')
        return 1;
    return 0; 
}

int is_double(std::string & str){
    int i = 0;
    if (str[i] == '-' || str[i] == '+' || isdigit(str[i]))
    {
        for (i = 1; i < str.length(); i++)
        {
            if ((!isdigit(str[i]) && str[i] != '.'))
                    return 0;
        }   
    }
    return 1; 
}

int is_char(std::string & str){
    if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
        return 1;
    return 0;
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
    std::cout << "float: inff" << std::endl;
    std::cout << "double: inf" << std::endl;
}

void print__inf(){
    std::cout << "char: impossible " << std::endl;
    std::cout << "int: impossible " << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}

void ScalarConvert::convert(std::string & str){
        int tmp = 0;
        
        if (!str.empty())
        {
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
            if (is_char(str))
            {
                std::cout << "char: " << "'" << str << "'" << std::endl;
                std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
                std::cout << "float: " << std::setprecision(1) << std::fixed <<  static_cast<float>(str[0]) << "f" << std::endl;
                std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(str[0]) << std::endl;
            }
            else if (is_digit(str) == 1)
            {
                long i = 0;
                try{
                    if (((i = std::stoi(str)) >= std::numeric_limits<int>::min())
                        && ((i = std::stoi(str)) <= std::numeric_limits<int>::max())){
                        tmp = i;
                        cast_to_char(i);
                        std::cout << "int: " << tmp << std::endl;
                        std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(tmp) << "f" << std::endl;
                        std::cout << "double: " << std::setprecision(1) << std::fixed <<  static_cast<double>(tmp) << std::endl;
                    }
                }
                catch(const std::exception & e){
                    std::cout << "int: impossible " << std::endl;
                    
                }
            }
            else if (is_float(str) == 1)
            {
                float f = 0;
                try{
                    f = std::stof(str);
                    if (f >= std::numeric_limits<int>::min() && f <= std::numeric_limits<int>::max())
                    {
                        long k = static_cast<long>(f);
                        cast_to_char(k);
                        std::cout << "int: " << static_cast<int>(f) << std::endl;
                    }
                    else
                    {
                        std::cout << "char: impossible " << std::endl;
                        std::cout << "int: impossible " << std::endl;
                    }
                    std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
                    std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(f) << std::endl;
                }
                catch(const std::exception & e){
                    std::cout << "float: impossible " << std::endl;
                }
            }
            else if (is_double(str) == 1)
            {
                double d = 0;
                try{
                    d = std::stod(str);
                    if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
                    {
                        long k = static_cast<long>(d);
                        cast_to_char(k);
                        std::cout << "int: " << static_cast<int>(d) << std::endl;
                    }
                    else
                    {
                        std::cout << "char: impossible " << std::endl;
                        std::cout << "int: impossible " << std::endl;
                    }
                    std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(d)  << "f" << std::endl;
                    std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;
                }
                catch(const std::exception & e){
                    std::cout << "double: impossible " << std::endl;
                }
            }
            else
                std::cout << "non displayable " << std::endl;
        }
        else
            std::cout << "empty string" << std::endl;
        return ;
}