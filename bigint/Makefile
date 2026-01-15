NAME = bigint
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = bigint.cpp main.cpp
OBJ = bigint.o main.o

all: $(NAME)

%.o: %.c
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
