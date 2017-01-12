/*
** ulstr.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Tue Apr 19 18:21:46 2016 Exam User
** Last update Tue Apr 19 18:21:46 2016 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	is_lower(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}

int	is_upper(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}

int	main(int ac, char **av)
{
  char	*str;
  int	i;

  i = 0;
  if (ac != 2)
    {
      my_putchar('\n');
      return (0);
    }
  str = av[1];
  while (str[i] != '\0')
    {
      if (is_lower(str[i]))
	my_putchar(str[i] - 32);
      else if (is_upper(str[i]))
	my_putchar(str[i] + 32);
      else
	my_putchar(str[i]);
      ++i;
    }
  my_putchar('\n');
  return (0);
}
