
NAME = libft.a

SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror -Includes

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking..."
	@ar rcs $(NAME) $?
	@echo "Linking ok"

clean:
	@rm -f *.o
	@echo "clean..."
fclean: clean
	@rm -f $(NAME)
	@echo "fclean..."

re: fclean all
