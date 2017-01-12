##
## Makefile for ex_3 in /home/exam/rendu/ex_3
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Tue Dec  1 17:10:11 2015 Exam User
## Last update Tue Dec  1 18:49:51 2015 Exam User
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
