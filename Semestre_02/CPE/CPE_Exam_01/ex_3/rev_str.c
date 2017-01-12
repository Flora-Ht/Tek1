/*
** rev_str.c for  in /home/exam/rendu/ex_3
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Feb 13 09:18:25 2016 Exam User
** Last update Sat Feb 13 09:18:53 2016 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    ++i;
  return (i);
}

int	my_put_revstr(char *str)
{
  int	i;

  i = my_strlen(str) - 1;
  while (i >= 0)
    {
      my_putchar(str[i]);
      --i;
    }
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
  my_put_revstr(str);
  my_putchar('\n');
  return (0);
}
