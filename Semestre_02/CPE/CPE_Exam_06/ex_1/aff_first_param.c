/*
** aff_first_param.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Wed May 04 09:38:38 2016 Exam User
** Last update Wed May 04 09:38:38 2016 Exam User
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      ++i;
    }
}

int	main(int ac, char **av)
{
  if (ac == 1)
    my_putchar('\n');
  else
    {
      my_putstr(av[1]);
      my_putchar('\n');
    }
  return (0);
}
