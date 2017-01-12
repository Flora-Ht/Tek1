/*
** hidenp.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Wed May 04 09:44:36 2016 Exam User
** Last update Wed May 04 09:44:36 2016 Exam User
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
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      ++i;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    ++i;
  return (i);
}

int	my_cmp(char *s1, char *s2, int cs1, int cs2)
{
  if ((s1[0] == '\0') ^ (s2[0] == '\0'))
    {
      my_putstr("0\n");
      return (0);
    }
  while (s2[cs2] != '\0')
    {
      if (s1[cs1] == s2[cs2])
	{
	  ++cs1;
	  ++cs2;
	}
      else
	++cs2;
    }
  if (cs1 == my_strlen(s1))
    my_putstr("1\n");
  else
    my_putstr("0\n");
  return (0);
}

int	main(int ac, char **av)
{
  char	*s1;
  char	*s2;
  int	cs1;
  int	cs2;

  if (ac == 3)
    {
      cs1 = 0;
      cs2 = 0;
      s1 = av[1];
      s2 = av[2];
      my_cmp(s1, s2, cs1, cs2);
    }
  else
    my_putchar('\n');
  return (0);
}
