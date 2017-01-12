/*
** my_str_to_wordtab.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Feb 26 09:46:21 2016 Exam User
** Last update Fri Feb 26 09:46:21 2016 Exam User
*/

#include <stdlib.h>

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    ++i;
  return (i);
}

char		*my_strndup(char *str, int n)
{
  int		i;
  char		*dest;

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

int		count_words(char *str)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if (str[i] != ' ' && str[i] != '\t')
	if (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t') || i == 0)
	  ++nb;
      ++i;
    }
  return (nb);
}

int		count_letters(char *str, int index)
{
  int		i;

  i = 0;
  while (str[index + i] != ' ' && str[index + i] != '\t')
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
      if (str[i] != ' ' && str[i] != '\t')
	{
	  letters_nb = count_letters(str, i);
	  if ((result[ri] = malloc(letters_nb + 1)) == NULL)
	    return (1);
	  result[ri] = my_strndup(&str[i], letters_nb);
	  ++ri;
	  i += letters_nb + 1;
	}
      else
	++i;
    }
}

char		**my_str_to_wordtab(char *str)
{
  char		**result;
  int		words_nb;

  words_nb = count_words(str);
  if ((result = malloc(sizeof(char *) * (words_nb + 1))) == NULL)
    return (NULL);
  cut_str(str, result);
  result[words_nb + 1] = '\0';
  return (result);
}
