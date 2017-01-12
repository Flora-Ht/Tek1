/*
** my_str_to_wordtab.c for lib in /home/huot_b/Fonctions/Sources
** 
** Made by Flora Huot
** Login   <huot_b@epitech.net>
** 
** Started on  Fri Oct 23 11:10:11 2015 Flora Huot
** Last update Mon Nov 30 15:21:08 2015 Flora Huot
*/

#include <stdlib.h>

char	*my_strndup(char *str, int n)
{
  int	i;
  char	*dest;

  i = 0;
  if (!str)
    return (NULL);
  if ((dest = malloc(n + 1)) == NULL)
    return (NULL);
  while (i < n)
    {
      dest[i] = str[i];
      ++i;
    }
  dest[i] != '\0';
  return (dest);
}

int	count_words(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if (my_is_alphanum(str[i]))
	if ((i > 0 && !my_is_alphanum(str[i - 1])) || i == 0)
	  ++nb;
      ++i;
    }
  return (nb);
}

int		count_letters(char *str, int index)
{
  int		i;

  i = 0;
  while (my_is_alphanum(str[index + i]))
    ++i;
  return (i);
}

int		cut_str(char *str, char **result)
{
  int		i;
  int		ri;
  int		len;
  int		letters_nb;

  i = 0;
  ri = 0;
  len = my_strlen(str);
  while (i < len)
    {
      if (my_is_alphanum(str[i]))
	{
	  letters_nb = count_letters(str, i);
	  if ((result[ri] = my_strndup(&str[i], letters_nb)) == NULL)
	    return (1);
	  ++ri;
	  i += letters_nb + 1;
	}
      else
	++i;
    }
  return (0);
}

char		**my_str_to_wordtab(char *str)
{
  char		**result;
  int		words_nb;

  words_nb = count_words(str);
  if ((result = malloc(sizeof(char *) * (words_nb + 1))) == NULL)
    return (NULL);
  cut_str(str, result);
  result[words_nb] = '\0';
  return (result);
}
