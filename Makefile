NAME 		= push_swap
OBJS		= $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))
OBJS_DIR	= objs/
SRCS		= $(wildcard *.c)
INCS		=
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -rf

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o: %.c 
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all