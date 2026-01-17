NAME = vect2
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = *.cpp
OBJ = vect2.o main.o

all: $(NAME)

%.o: %.c
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $@

clean:
	@rm -rf $(OBJ) && clear

fclean: clean
	@rm -rf $(NAME)

re: fclean all
