/*
** misc.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 12 09:52:06 2016 Exam User
** Last update Sat Mar 12 09:52:06 2016 Exam User
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
      my_putchar(str[i]);
      ++i;
    }
  return (0);
}
