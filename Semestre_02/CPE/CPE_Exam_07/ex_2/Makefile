##
## Makefile for  in /home/exam/rendu/ex_2
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Thu May 19 09:35:33 2016 Exam User
## Last update Thu May 19 09:35:33 2016 Exam User
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
