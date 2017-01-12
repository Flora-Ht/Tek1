##
## Makefile for  in /home/exam/rendu/ex_1
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Tue Apr 19 18:03:05 2016 Exam User
## Last update Tue Apr 19 18:03:05 2016 Exam User
##

NAME	= rstr_capitalizer

SRCS	= rstr_capitalizer.c \
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
