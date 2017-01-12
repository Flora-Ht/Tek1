/*
** my_strdup.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Tue Apr 19 18:42:15 2016 Exam User
** Last update Tue Apr 19 18:42:15 2016 Exam User
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    ++i;
  return (i);
}

char	*my_strndup(char *str, int nb)
{
  int	i;
  char	*dest;

  if (!str)
    return (NULL);
  dest = malloc(nb + 1);
  if (dest == NULL)
    return (NULL);
  i = 0;
  while (i < nb)
    {
      dest[i] = str[i];
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}

