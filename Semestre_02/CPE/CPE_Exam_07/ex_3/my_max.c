/*
** my_max.c for  in /home/exam/rendu/ex_3
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Thu May 19 09:47:59 2016 Exam User
** Last update Thu May 19 09:50:29 2016 Exam User
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
