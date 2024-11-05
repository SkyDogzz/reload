CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCS= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c:
	$(CC) $(FLAGS) -c $< -o $@
