/*
** rstr_capitalizer.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Tue Apr 19 18:03:54 2016 Exam User
** Last update Tue Apr 19 18:03:54 2016 Exam User
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
  return (str);
}

char	*rstr_capitalize(char *str)
{
  int	i;

  i = 0;
  if (!str)
    return (0);
  str = my_strlowcase(str);
  while (str[i])
    {
      if (my_is_alphanum(str[i]) && my_islower(str[i]))
	{
	  if ((str[i] != ' ' || str[i] != '\t')
	      && (str[i + 1] == ' ' || str[i + 1] == '\t'
		  || str[i + 1] == '\0'))
	    str[i] -= 32;
	}
      ++i;
    }
  return (str);
}

int	main(int ac, char **av)
{
  int	i;
  
  if (ac > 1)
    {
      i = 1;
      while (av[i])
	{
	  my_putstr(rstr_capitalize(av[i]));
	  my_putchar('\n');
	  ++i;
	}
    }
  else
    my_putchar('\n');
  return (0);
}
