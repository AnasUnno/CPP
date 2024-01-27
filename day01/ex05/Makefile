# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 17:32:22 by araji-af          #+#    #+#              #
#    Updated: 2024/01/27 15:43:35 by araji-af         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Harl.cpp

NAME = ./Harl

OBJ = $(SRCS:.cpp=.o)


FLAGS = -Wall -Wextra -Werror -std=c++98

HEADRES = Harl.hpp

%.o : %.cpp
	c++ $(FLAGS) -c $< -o $@

all : $(NAME) $(HEADRES)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all