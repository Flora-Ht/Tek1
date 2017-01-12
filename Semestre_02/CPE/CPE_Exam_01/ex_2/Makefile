##
## Makefile for  in /home/exam/rendu/ex_2
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Feb 13 08:47:11 2016 Exam User
## Last update Sat Feb 13 08:47:25 2016 Exam User
##

NAME	= fprime

CC	= gcc

CFLAGS	= -I.

RM	= rm -f

SRCS	= fprime.c

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
