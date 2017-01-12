/*
** my_max.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 12 09:40:07 2016 Exam User
** Last update Sat Mar 12 09:40:07 2016 Exam User
*/

int	max_two_int(int a, int b)
{
  if (a > b)
    return (a);
  else
    return (b);
}

int	my_max(int itab[], int len)
{
  int	i;
  int	max;

  i = 0;
  max = itab[0];
  while (i < len)
    {
      max = max_two_int(max, itab[i]);
      ++i;
    }
  return (max);
}
