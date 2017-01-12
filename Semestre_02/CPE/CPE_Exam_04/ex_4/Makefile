##
## Makefile for  in /home/exam/rendu/ex_4
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Mar 26 09:44:30 2016 Exam User
## Last update Sat Mar 26 09:44:30 2016 Exam User
##

NAME	= ord_alphlong

SRCS	= ord_alphalong.c \
		  my_str_to_wordtab.c \
		  misc.c \
		  str.c \
		  sort.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -g

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
