/*
** misc.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 26 09:59:22 2016 Exam User
** Last update Sat Mar 26 09:59:22 2016 Exam User
*/

#include "ord_alphalong.h"

int	my_is_alphanum(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else if (c >= 'A' && c <= 'Z')
    return (1);
  else if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

char	my_charlowcase(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (c + 32);
  return (c);
}

int		my_strcmp(char *s1, char *s2)
{
  int		i;
  int		max_len;

  i = 0;
  if (my_strlen(s1) < my_strlen(s2))
    max_len = my_strlen(s2);
  else
    max_len = my_strlen(s1);
  if (!s1 || ! s2)
    return (0);
  while (i <= max_len)
    {
      if (my_charlowcase(s1[i]) != my_charlowcase(s2[i]))
	return (my_charlowcase(s1[i]) - my_charlowcase(s2[i]));
      ++i;
    }
  return (0);
}

void		my_putnb(unsigned int nb)
{
  if (nb > 9)
    my_putnb(nb / 10);
  my_putchar('0' + nb % 10);
}

int		my_put_nbr(int nb)
{
  unsigned int	n;

  n = nb;
  if (nb < 0)
    {
      my_putchar('-');
      n = -nb;
    }
  my_putnb(n);
  return (0);
}
