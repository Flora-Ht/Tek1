/*
** str.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Tue Apr 19 18:43:34 2016 Exam User
** Last update Tue Apr 19 18:43:34 2016 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      ++i;
    }
  return (0);
}

