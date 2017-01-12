##
## Makefile for  in /home/exam/rendu/ex_3
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Mar 26 09:41:49 2016 Exam User
## Last update Sat Mar 26 09:41:49 2016 Exam User
##

NAME	= str_capitalize

SRCS	= str_capitalize.c \
		  misc.c

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
