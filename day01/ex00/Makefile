# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 17:32:22 by araji-af          #+#    #+#              #
#    Updated: 2024/01/24 14:57:58 by araji-af         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

NAME = ./Zombie

OBJ = $(SRCS:.cpp=.o)

HEADER = Zombie.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp $(HEADER)
	c++ $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all