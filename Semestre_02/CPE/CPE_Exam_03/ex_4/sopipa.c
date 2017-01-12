/*
** sopipa.c for  in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Mar 12 09:55:17 2016 Exam User
** Last update Sat Mar 12 09:55:17 2016 Exam User
*/

#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int		core(int fd_pipe[2], char **av, int in, int out)
{
  pid_t		pid;

  if ((pid = fork()) == 0)
    {
      close(fd_pipe[0]);
      dup2(fd_pipe[1], 1);
      close(fd_pipe[1]);
      close(0);
      dup(in);
      execl("/bin/sh", "/bin/sh", "-c", av[2], (char *)0);
      exit(1);
    }
  close(1);
  dup(out);
  close(fd_pipe[1]);
  dup2(fd_pipe[0], 0);
  close(fd_pipe[0]);
  execl("/bin/sh", "/bin/sh", "-c", av[3], (char *)0);
  close(out);
  close(in);
}

int		main(int ac, char **av)
{
  int		in;
  int		out;
  int		fd_pipe[2];

  out = open(av[4], O_CREAT | O_TRUNC | O_WRONLY, 0777);
  in = open(av[1], O_RDONLY);
  pipe(fd_pipe);
  core(fd_pipe, av, in, out);
  return (0);
}
