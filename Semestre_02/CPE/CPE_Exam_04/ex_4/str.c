/*
** str.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 26 09:47:56 2016 Exam User
** Last update Sat Mar 26 09:47:56 2016 Exam User
*/

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

  if (!str)
    return (0);
  i = 0;
  while (str[i] != '\0')
    ++i;
  return (i);
}
