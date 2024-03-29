NAME 		= push_swap
SRCS		= index.c moves.c parse.c push_swap.c radix_sort.c simple_sorts.c sort_utils.c 
SRCS_B		= index.c moves.c parse.c push_swap_bonus.c sort_utils.c 
BONUS		= checker
DIR			= src/
SRCS_PREF	= $(addprefix $(DIR), $(SRCS))
SRCS_B_PREF	= $(addprefix $(DIR), $(SRCS_B))
OBJS		= $(SRCS_PREF:.c=.o)
OBJS_B		= $(SRCS_B_PREF:.c=.o)
INCS		= -Iincludes #-Ilibft -L./libft
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -fsanitize=address -g3
RM			= rm -rf

%.o: %.c
	$(CC) $(CFLAGS) -Iincludes -Ilibft -c $< -o $@

$(NAME) : $(OBJS)
	make -C libft
	$(CC) $(CFLAGS) $(INCS) -o $@ $(OBJS) libft/libft.a

$(BONUS) : $(OBJS_B)
	make -C libft
	$(CC) $(CFLAGS) $(INCS) -o $@ $(OBJS_B) libft/libft.a

all : $(NAME) $(BONUS)

man : $(NAME)

bonus : $(BONUS)

clean :
	@make clean -C ./libft
	@rm -rf src/*.o

fclean : clean
	@make fclean -C ./libft
	@rm -rf $(NAME) $(BONUS)

re : fclean all