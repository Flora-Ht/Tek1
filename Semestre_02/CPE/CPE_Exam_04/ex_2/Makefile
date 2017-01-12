##
## Makefile for  in /home/exam/rendu/ex_2
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Mar 26 09:38:40 2016 Exam User
## Last update Sat Mar 26 09:38:40 2016 Exam User
##

NAME	= rotone

CC	= gcc

RM	= rm -f

SRCS	= rotone.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
