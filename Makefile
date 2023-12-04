NAME = push_swap
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR= Libft/
OBJ_DIR = obj/
SRC_DIR = srcs/

SRC_1 = srcs/push_swap.c \

SRC_2 =	srcs/parse.c			\
		srcs/ft_error.c			\
		srcs/ft_operations1.c	\
		srcs/ft_operations2.c	\
		srcs/ft_operations3.c 	\
		srcs/ft_operations4.c 	\
		srcs/ft_split.c 		\
		srcs/ft_strjoin.c 		\
		srcs/ft_util1.c 		\
		srcs/ft_util2.c 		\
		srcs/ft_util3.c 		\
		srcs/create_stack.c		\
		srcs/algorithm.c		\

OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

INCLUDE = -L ./Libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean:
	${RM} ${OBJ_1} ${OBJ_2}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re