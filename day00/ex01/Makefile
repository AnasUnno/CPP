# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 10:16:20 by araji-af          #+#    #+#              #
#    Updated: 2024/01/24 14:57:19 by araji-af         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = PhoneBook.cpp main.cpp Contact.cpp

NAME = phonebook

OBJ = $(SRCS:.cpp=.o)

HEADERS = PhoneBook.hpp Contact.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp $(HEADERS)
	c++ $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all