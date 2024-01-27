# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 10:16:20 by araji-af          #+#    #+#              #
#    Updated: 2024/01/16 15:31:57 by araji-af         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

NAME = megaphone

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