/*
** ord_alphalong.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 26 09:45:05 2016 Exam User
** Last update Sat Mar 26 09:45:05 2016 Exam User
*/

#include "ord_alphalong.h"

int	ord_alphalong(char *str)
{
  int	i;
  int	nb_words;
  char	**tab;

  nb_words = count_words(str);
  if ((tab = my_str_to_wordtab(str)) == NULL)
    return (1);
  tab = sort_by_alpha(tab, nb_words);
  tab = sort_by_len(tab, nb_words);
  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      if (tab[i] && tab[i + 1]
	  && my_strlen(tab[i]) == my_strlen(tab[i + 1]))
	my_putchar(' ');
      else if (tab[i + 1])
	my_putchar('\n');
      ++i;
    }
  return (0);
}

int	main(int ac, char **av)
{
  if (ac == 2)
    if (ord_alphalong(av[1]))
      return (0);
  my_putchar('\n');
  return (0);
}
