##
## Makefile for ex_2 in /home/exam/rendu/ex_2
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Mon Jan  4 09:16:36 2016 Exam User
## Last update Mon Jan  4 09:25:08 2016 Exam User
##

NAME	= tab_mult

SRCS	= tab_mult.c \

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
