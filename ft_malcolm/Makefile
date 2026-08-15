NAME	=	ft_malcolm

RESET	=	\033[0m
GREEN	=	\033[32m
YELLOW	=	\033[33m
BLUE	=	\033[34m
RED	=	\033[31m

SRCS	=	$(shell find . -type f -name "*.c" -not -path "./libft/*")
OBJS	=	$(SRCS:./%.c=./bin/%.o)
BIN	=	./bin
LIBFT	=	libft/libft.a

CC	=	@gcc
RM	=	@rm -rf 
OUT	=	-o $(NAME)
CFG	=	-Wall -Werror -Wextra

all:	$(LIBFT) $(NAME)

$(LIBFT):
	@make -s --no-print-directory -C libft/

$(NAME):  $(LIBFT) $(OBJS)
	  @echo "$(YELLOW)>_ Compiling... [$(NAME)] $(RESET)"
	  $(CC) $(CFG) $(OUT) $(OBJS) $(LIBFT)
	  @echo "$(GREEN)>_ Finished! $(RESET)"

$(BIN)/%.o: ./%.c
	@mkdir -p $(shell dirname $@)
	@$(CC) $(CFG) -c $< -o $@

clean:
	@echo "$(RED)>_ Deleting... [$(NAME)] $(RESET)"
	$(RM) $(OBJS)
	$(RM) $(BIN)
	@make clean -s --no-print-directory -C libft/
	@echo "$(RED)>_ Deleted! $(RESET)"

fclean: clean
	 $(RM) $(NAME)
	 @make fclean -s --no-print-directory -C libft/
			

re:	fclean all

.PHONY:	all clean fclean re
