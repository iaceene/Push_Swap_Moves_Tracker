SRC = ./src/additional_func_bonus.c \
			./src/ft_atol_bonus.c \
			./src/instructions_utiles_bonus.c \
			./src/checker_bonus.c \
			./src/ft_splite_bonus.c \
			./src/get_next_line_utils_bonus.c \
			./src/main_bonus.c \
			./src/stack_a_bonus.c \
			./src/clear_list_bonus.c \
			./src/get_next_line_bonus.c \
			./src/instructions_bonus.c \
			./src/main_utiles_bonus.c \
			./src/stack_a_utiles_bonus.c

INCLUD = ./src/push_swap_bonus.h ./src/get_next_line_bonus.h
NAME = Moves_Tracker
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

bonus : $(NAME)

$(NAME) : $(OBJ)
	cc $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.c $(INCLUD)
	cc $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
