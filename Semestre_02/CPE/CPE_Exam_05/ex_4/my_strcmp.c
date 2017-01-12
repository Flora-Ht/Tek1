/*
** my_strcmp.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Tue Apr 19 18:35:24 2016 Exam User
** Last update Tue Apr 19 18:35:24 2016 Exam User
*/

int	my_strlen(char *);

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

