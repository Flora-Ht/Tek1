##
## Makefile for  in /home/exam/rendu/ex_4
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Tue Apr 19 18:27:35 2016 Exam User
## Last update Tue Apr 19 18:27:35 2016 Exam User
##

NAME	= sort_word

CC		= gcc

RM		= rm -f

SRCS	= sort_word.c \
		  my_is_alphanum.c \
		  my_strcmp.c \
		  my_strdup.c \
		  my_str_to_wordtab.c \
		  str.c 

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
