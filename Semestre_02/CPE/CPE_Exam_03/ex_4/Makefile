##
## Makefile for  in /home/exam/rendu/ex_4
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Mar 12 09:54:57 2016 Exam User
## Last update Sat Mar 12 09:54:57 2016 Exam User
##

NAME	= sopipa

SRCS	= sopipa.c \

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
