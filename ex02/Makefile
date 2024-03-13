# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 20:32:06 by yamajid           #+#    #+#              #
#    Updated: 2024/03/13 01:46:24 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	Identify
Run		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	 main.cpp Base.cpp A.cpp B.cpp C.cpp

otherS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(Run) $(FLAGS) -c $< -o $@

$(NAME): $(otherS) Base.hpp A.hpp B.hpp C.hpp
	$(Run) $(FLAGS) -o $(NAME) $(otherS)

clean:
	$(RM) $(otherS)
fclean: clean
	$(RM) $(NAME)

re: fclean all