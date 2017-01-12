/*
** main.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 13 08:38:14 2016 Exam User
** Last update Sat Feb 13 08:42:37 2016 Exam User
*/

#include <stdio.h>
#include "doop.h"

int	my_op(int value1, char operator, int value2)
{
  int	(*fptr[5])(int, int);
  int	op[5];
  int	i;

  i = 0;
  fptr[0] = &my_add;
  fptr[1] = &my_sub;
  fptr[2] = &my_div;
  fptr[3] = &my_mul;
  fptr[4] = &my_mod;
  op[0] = '+';
  op[1] = '-';
  op[2] = '/';
  op[3] = '*';
  op[4] = '%';
  while (i < 5)
    {
      if (operator == op[i])
	fptr[i](value1, value2);
      i = i + 1;
    }
}

int	main(int ac, char **av)
{
  int	value1;
  int	value2;
  char	operator;
  int	result;

  if (ac == 4)
    {
      value1 = atoi(av[1]);
      value2 = atoi(av[3]);
      operator = *av[2];
      my_op(value1, operator, value2);
    }
  printf("%c", '\n');
  return (0);
}
