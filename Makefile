
NAME = libft.a

SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror -Includes

all: $(NAME)

$(NAME): $(OBJ)
	echo "Linking..."
	@ar rcs $(NAME) $?

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
