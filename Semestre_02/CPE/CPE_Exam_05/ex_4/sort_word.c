/*
** sort_word.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Tue Apr 19 18:27:59 2016 Exam User
** Last update Tue Apr 19 18:27:59 2016 Exam User
*/

#include <stdlib.h>

int	count_words(char *);
int	my_putstr(char *);
int	my_strcmp(char *, char *);
char	*my_strndup(char *, int);
char	**my_str_to_wordtab(char *);
void	my_putchar(char);
     
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

int	sort_word(char *str)
{
  int	i;
  int	nb_words;
  char	**tab;

  tab = my_str_to_wordtab(str);
  nb_words = count_words(str);
  tab = sort_by_alpha(tab, nb_words);
  i = 0;
  while (tab[i])
    {
      if (i > 0)
	my_putchar(' ');
      my_putstr(tab[i]);
      ++i;
    }
  return (0);
}

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      sort_word(av[1]);
      my_putchar('\n');
    }
  else
    my_putchar('\n');
  return (0);
}
