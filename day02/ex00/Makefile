# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 15:08:02 by araji-af          #+#    #+#              #
#    Updated: 2024/02/08 13:53:53 by araji-af         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Fixed.cpp main.cpp

NAME = ./Fixed

OBJ = $(SRCS:.cpp=.o)


FLAGS = -Wall -Wextra -Werror -std=c++98

HEADRES = Fixed.hpp

%.o : %.cpp $(HEADRES)
	c++ $(FLAGS) -c $< -o $@

all : $(NAME) $(HEADRES)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all