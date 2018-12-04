
NAME = libft.a

SRC = ft_isprint.c ft_memchr.c ft_putnbr_fd.c ft_striter.c \
ft_strnequ.c ft_itoa.c ft_memcmp.c ft_putstr.c ft_striteri.c ft_strnew.c \
ft_atoi.c ft_lstadd.c ft_memcpy.c ft_putstr_fd.c \
ft_strjoin.c ft_strnstr.c ft_bzero.c ft_lstaddend.c \
ft_memdel.c ft_strcat.c ft_strlcat.c ft_strrchr.c \
ft_cword.c ft_lstdel.c ft_memmove.c ft_strchr.c ft_strlen.c ft_strsplit.c \
ft_del.c ft_lstdelone.c ft_memset.c ft_strclr.c ft_strlen_c.c ft_strstr.c \
ft_intlen.c ft_lstiter.c ft_putchar.c ft_strcmp.c ft_strmap.c ft_strsub.c \
ft_isalnum.c ft_lstmap.c ft_putchar_fd.c ft_strcpy.c ft_strmapi.c ft_strtrim.c \
ft_isalpha.c ft_lstnew.c ft_putendl.c ft_strdel.c ft_strncat.c ft_tolower.c \
ft_isascii.c ft_memalloc.c ft_putendl_fd.c ft_strdup.c ft_strncmp.c ft_toupper.c \
ft_isdigit.c ft_memccpy.c ft_putnbr.c ft_strequ.c ft_strncpy.c    

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
