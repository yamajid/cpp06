# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 23:49:24 by yamajid           #+#    #+#              #
#    Updated: 2024/03/13 01:46:09 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	ScalarConvert
Run		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	 main.cpp ScalarConvert.cpp

otherS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(Run) $(FLAGS) -c $< -o $@

$(NAME): $(otherS) ScalarConvert.hpp
	$(Run) $(FLAGS) -o $(NAME) $(otherS)

clean:
	$(RM) $(otherS)
fclean: clean
	$(RM) $(NAME)

re: fclean all