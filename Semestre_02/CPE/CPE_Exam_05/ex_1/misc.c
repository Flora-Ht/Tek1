/*
** misc.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Tue Apr 19 18:03:46 2016 Exam User
** Last update Tue Apr 19 18:03:46 2016 Exam User
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

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    ++i;
  return (i);
}
