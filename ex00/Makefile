NAME = ft_display_file

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_display_file.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.c

fclean: clean
	rm -f $(NAME)

