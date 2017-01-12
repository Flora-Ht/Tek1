/*
** my_str_to_wordtab.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Tue Apr 19 18:42:06 2016 Exam User
** Last update Tue Apr 19 18:42:06 2016 Exam User
*/

#include <stdlib.h>

int	my_is_alphanum(char c);
char	*my_strndup(char *, int);

int	count_words(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if (my_is_alphanum(str[i]))
	if (i > 0 && !my_is_alphanum(str[i - 1]) || i == 0)
	  ++nb;
      ++i;
    }
  return (nb);
}

int	count_letters(char *str, int index)
{
  int	i;

  i = 0;
  while (my_is_alphanum(str[index + i]))
    ++i;
  return (i);
}

int	cut_str(char *str, char **result)
{
  int	i;
  int	ri;
  int	len;
  int	letters_nb;

  i = 0;
  ri = 0;
  len = my_strlen(str);
  while (i < len)
    {
      if (my_is_alphanum(str[i]))
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

char	**my_str_to_wordtab(char *str)
{
  char	**result;
  int	words_nb;

  words_nb = count_words(str);
  if ((result = malloc(sizeof(char *) * (words_nb + 1))) == NULL)
    return (NULL);
  cut_str(str, result);
  result[words_nb + 1] = '\0';
  return (result);
}
