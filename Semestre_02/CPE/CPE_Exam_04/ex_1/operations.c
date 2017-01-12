/*
** operations.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 26 09:34:17 2016 Exam User
** Last update Sat Mar 26 09:34:17 2016 Exam User
*/

#include <stdio.h>

int	my_add(int a, int b)
{
  printf("%d", a + b);
  return (0);
}

int	my_sub(int a, int b)
{
  printf("%d", a - b);
  return (0);
}

int	my_div(int a, int b)
{
  if (b != 0)
    printf("%d", a / b);
  return (0);
}

int	my_mul(int a, int b)
{
  printf("%d", a * b);
  return (0);
}

int	my_mod(int a, int b)
{
  if (b != 0)
    printf("%d", a % b);
  return (0);
}
