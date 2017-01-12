##
## Makefile for  in /home/exam/rendu/ex_4
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Feb 13 09:20:00 2016 Exam User
## Last update Sat Feb 13 09:20:01 2016 Exam User
##

NAME	= half_str

SRCS	= main.c

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
