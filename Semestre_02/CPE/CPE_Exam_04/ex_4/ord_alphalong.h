/*
** ord_alphalong.h for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 26 09:50:03 2016 Exam User
** Last update Sat Mar 26 09:50:03 2016 Exam User
*/

#ifndef ORD_ALPHALONG_H_
# define ORD_ALPHALONG_H_

# include <unistd.h>
# include <stdlib.h>

char	*my_strndup(char *str, int n);
char	**my_str_to_wordtab(char *str);
char	**sort_by_alpha(char **tab, int nb_words);
char	**sort_by_len(char **tab, int nb_words);
char	my_charlowcase(char c);
int	count_words(char *str);
int	is_sorted_by_alpha(char **tab);
int	is_sorted_by_len(char **tab);
int	my_is_alphanum(char c);
int	my_put_nbr(int nb);
int	my_strcmp(char *s1, char *s2);
int	my_strlen(char *str);
void	my_putchar(char c);
void	my_putstr(char *str);

#endif /* !ORD_ALPHALONG_H_ */
