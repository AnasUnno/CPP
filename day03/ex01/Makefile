SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

NAME = ./ClapTrap

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADRES = ClapTrap.hpp ScavTrap.hpp

%.o : %.cpp $(HEADRES)
	c++ $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all