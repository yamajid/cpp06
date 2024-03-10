# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 23:36:35 by yamajid           #+#    #+#              #
#    Updated: 2024/03/10 01:21:46 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	Serialize
Run		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	 main.cpp Serialize.cpp

otherS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(otherS)
	$(Run) $(FLAGS) -o $(NAME) $(otherS)

clean:
	$(RM) $(otherS)
fclean: clean
	$(RM) $(NAME)

re: fclean all