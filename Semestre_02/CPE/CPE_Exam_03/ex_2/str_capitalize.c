/*
** str_capitalize.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 12 09:53:36 2016 Exam User
** Last update Sat Mar 12 09:53:36 2016 Exam User
*/

int	my_is_alphanum(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else if (c >= 'A' && c <= 'Z')
    return (1);
  else if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	my_islower(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  if (str == 0 || str[0] == '\0')
    return (str);
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] += 32;
      ++i;
    }
}

char	*str_capitalize(char *str)
{
  int	i;

  i = 0;
  if (!str)
    return (0);
  my_strlowcase(str);
  while (str[i] != '\0')
    {
      if (my_islower(str[i]))
	{
	  if (i == 0)
	    str[i] = str[i] - 32;
	  else if (i > 0 && (str[i - 1] == 32 || str[i - 1] == 9))
	    str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  return (str);
}

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      my_putstr(str_capitalize(av[1]));
      my_putchar('\n');
    }
  else
    my_putchar('\n');
  return (0);
}
