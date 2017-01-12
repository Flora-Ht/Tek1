##
## Makefile for  in /home/exam/rendu/ex_1
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Feb 13 08:41:34 2016 Exam User
## Last update Sat Feb 13 08:41:35 2016 Exam User
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
