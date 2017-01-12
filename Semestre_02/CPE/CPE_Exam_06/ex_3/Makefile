##
## Makefile for  in /home/exam/rendu/ex_3
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Wed May 04 09:43:21 2016 Exam User
## Last update Wed May 04 09:43:21 2016 Exam User
##

NAME	= tab_mult

SRCS	= tab_mult.c

OBJS	= $(SRCS:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re
