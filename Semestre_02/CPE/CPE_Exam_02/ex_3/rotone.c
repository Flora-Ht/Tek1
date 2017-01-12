/*
** rotone.c for  in /home/exam/rendu/ex_3
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Feb 26 09:40:35 2016 Exam User
** Last update Fri Feb 26 09:40:35 2016 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	display(char *str, int i)
{
  if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
    my_putchar(str[i] + 1);
  else if (str[i] == 'z' || str[i] == 'Z')
    my_putchar(str[i] - 25);
  else
    my_putchar(str[i]);
  return (0);
}

int	main(int ac, char **av)
{
  int	i;
  char	*str;

  i = 0;
  str = av[1];
  if (ac != 2 || av[1][0] == '\0')
    {
      my_putchar('\n');
      return (0);
    }
  while (str[i] != '\0')
    {
      display(str, i);
      ++i;
    }
  my_putchar('\n');
  return (0);
}
