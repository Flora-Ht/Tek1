/*
** sort.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 26 10:19:39 2016 Exam User
** Last update Sat Mar 26 10:19:39 2016 Exam User
*/

#include "ord_alphalong.h"

int	is_sorted_by_len(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] && tab[i + 1])
    {
      if (my_strlen(tab[i]) > my_strlen(tab[i + 1]))
	return (0);
      ++i;
    }
  return (1);
}

char	**sort_by_len(char **tab, int nb_words)
{
  int	i;
  char	*tmp;

  i = 0;
  tmp = NULL;
  while (!is_sorted_by_len(tab) && i < nb_words)
    {
      if (tab[i] && tab[i + 1]
	  && my_strlen(tab[i]) > my_strlen(tab[i + 1]))
	{
	  tmp = my_strndup(tab[i], my_strlen(tab[i]));
	  free(tab[i]);
	  tab[i] = my_strndup(tab[i + 1], my_strlen(tab[i + 1]));
	  free(tab[i + 1]);
	  tab[i + 1] = my_strndup(tmp, my_strlen(tmp));
	  i = -1;
	  free(tmp);
	}
      ++i;
    }
  return (tab);
}

int	is_sorted_by_alpha(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] && tab[i + 1])
    {
      if (my_strcmp(tab[i], tab[i + 1]) > 0)
	return (0);
      ++i;
    }
  return (1);
}

char	**sort_by_alpha(char **tab, int nb_words)
{
  int	i;
  char	*tmp;

  i = 0;
  tmp = NULL;
  while (!is_sorted_by_alpha(tab) && i < nb_words)
    {
      if (tab[i] && tab[i + 1]
	  && my_strcmp(tab[i], tab[i + 1]) > 0)
	{
	  tmp = my_strndup(tab[i], my_strlen(tab[i]));
	  free(tab[i]);
	  tab[i] = my_strndup(tab[i + 1], my_strlen(tab[i + 1]));
	  free(tab[i + 1]);
	  tab[i + 1] = my_strndup(tmp, my_strlen(tmp));
	  i = -1;
	  free(tmp);
	}
      ++i;
    }
  return (tab);
}

