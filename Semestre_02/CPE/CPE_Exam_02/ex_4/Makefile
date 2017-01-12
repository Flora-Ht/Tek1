##
## Makefile for  in /home/exam/rendu/ex_4
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Fri Feb 26 09:43:54 2016 Exam User
## Last update Fri Feb 26 09:43:54 2016 Exam User
##

NAME	= rev_wstr

CC	= gcc

RM	= rm -f

SRCS	= rev_wstr.c \
		  my_str_to_wordtab.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -g

clean :
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
