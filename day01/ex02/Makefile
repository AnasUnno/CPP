# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 17:32:22 by araji-af          #+#    #+#              #
#    Updated: 2024/01/25 12:01:51 by araji-af         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp

NAME = ./Brain

OBJ = $(SRCS:.cpp=.o)


FLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp
	c++ $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all