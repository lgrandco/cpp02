NAME = bsp

SRC = Fixed.cpp main.cpp Point.cpp bsp.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

CC = cc
CXX = c++

CFLAGS = -Wall -Wextra -Werror -MMD -MP
CXXFLAGS = $(CFLAGS) --std=c++98

RM = rm -f

all : $(NAME)

$(NAME) : ${OBJ} Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) -g3 $(OBJ)

bonus: $(NAME)

clean :
	$(RM) $(NAME) $(OBJ) $(DEPS)

fclean : clean
	$(RM) $(NAME)

-include $(DEPS)

re : fclean all

.PHONY : all clean fclean re
