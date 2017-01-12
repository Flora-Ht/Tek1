/*
** fprime.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 13 08:47:29 2016 Exam User
** Last update Sat Feb 13 09:32:40 2016 Exam User
*/

#include <stdio.h>
#include <stdlib.h>

int	my_is_prime(int nb)
{
  int	a;

  a = 2;
  if (nb < 2)
    return (0);
  else
    while (a <= 46340 && a <= nb / 2)
      {
	if (nb % a == 0)
	  return (0);
	++a;
      }
  return (1);
}

void	fprime(int nb)
{
  int	i;
  int	sum;

  i = 2;
  sum = 0;
  while (i <= nb)
    {
      if (my_is_prime(i) && nb % i == 0)
	{
	  if (sum != 0)
	    printf("*");
	  printf("%i", i);
	  nb /= i;
	  ++sum;
	  i = 1;
	}
      ++i;
    }
}

int	main(int ac, char **av)
{
  int	i;
  int	nb;
  int	sum;

  if (ac == 2)
    {
      nb = atoi(av[1]);
      if (my_is_prime(nb))
	{
	  printf("%i\n", nb);
	  return (0);
	}
      fprime(nb);      
      printf("\n");
    }
  else
    printf("\n");
  return (0);
}
