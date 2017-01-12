/*
** tab_mult.c for  in /home/exam/rendu/ex_3
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Wed May 04 09:43:29 2016 Exam User
** Last update Wed May 04 09:43:29 2016 Exam User
*/

#include <stdio.h>

void	mult(int nb)
{
  int	i;

  i = 1;
  while (i < 10)
    {
      printf("%i x %i = %i\n", i, nb, i * nb);
      ++i;
    }
}

int	main(int ac, char **av)
{
  if (ac == 2)
    mult(atoi(av[1]));
  else
    printf("\n");
  return (0);
}
