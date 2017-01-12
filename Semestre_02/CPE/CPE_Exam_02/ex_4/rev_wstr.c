/*
** rev_wstr.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Feb 26 09:44:33 2016 Exam User
** Last update Fri Feb 26 09:44:33 2016 Exam User
*/

char	**my_str_to_wordtab(char *str);

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

int	main(int ac, char **av)
{
  int	i;
  int	words;
  char	**tab;

  if (ac == 2)
    {
      tab = my_str_to_wordtab(av[1]);
      words = 0;
      while (tab[words] != '\0')
	++words;
      i = words - 1;
      while (i >= 0)
	{
	  my_putstr(tab[i]);
	  if (i != 0)
	    my_putchar(' ');
	  --i;
	}
      my_putchar('\n');
    }
  else
    my_putchar('\n');
  return (0);
}
