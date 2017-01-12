/*
** my_is_alphanum.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Tue Apr 19 18:42:20 2016 Exam User
** Last update Tue Apr 19 18:42:20 2016 Exam User
*/

int	my_is_alphanum(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  else if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}
