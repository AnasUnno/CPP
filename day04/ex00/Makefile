SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

NAME = Animal

OBJ = $(SRCS:.cpp=.o)

#FLAGS = -Wall -Wextra -Werror -std=c++98

HEADRES = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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