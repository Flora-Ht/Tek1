##
## Makefile for  in /home/exam/rendu/ex_2
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Wed May 04 09:42:10 2016 Exam User
## Last update Wed May 04 09:42:10 2016 Exam User
##

NAME	= do_op

CC	= gcc

CFLAGS	= -I.

RM	= rm -f

SRCS	= main.c \
		  operations.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	 $(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
