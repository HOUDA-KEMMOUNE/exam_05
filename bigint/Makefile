NAME = bigint
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = bigint.cpp
OBJ = bigint.cpp

all: $(NAME)

$(OBJ): $(SRC)
	$(CPP) $(CPPFLAGS) -c $(SRC) -o $@

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
