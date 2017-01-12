/*
** maff_alpha.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Feb 26 09:35:06 2016 Exam User
** Last update Fri Feb 26 09:35:06 2016 Exam User
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

int	main()
{
  my_putstr("aBcDeFgHiJkLmNoPqRsTuVwXyZ\n");
  return (0);
}
