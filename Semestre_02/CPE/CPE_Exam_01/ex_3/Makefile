##
## Makefile for  in /home/exam/rendu/ex_3
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Feb 13 09:18:16 2016 Exam User
## Last update Sat Feb 13 09:18:18 2016 Exam User
##

NAME	= rev_str

CC	= gcc

SRCS	= rev_str.c

OBJS	= $(SRCS:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
