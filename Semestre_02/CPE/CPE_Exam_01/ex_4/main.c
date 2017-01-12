/*
** main.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 13 09:19:48 2016 Exam User
** Last update Sat Feb 13 09:20:25 2016 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (i % 2 == 0)
	{
	  my_putchar(str[i]);
	  ++i;
	}
      else
	++i;
    }
  return (0);
}

int	main(int ac, char **av)
{
  int	i;

  i = 1;
  if (ac == 1)
    {
      my_putchar('\n');
      return (0);
    }
  while (i < ac)
    {
      my_putstr(av[i]);
      my_putchar('\n');
      ++i;
    }
  return (0);
}
