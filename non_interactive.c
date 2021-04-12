#include "simple_shell.h"

/**
 * non_interactive - This function validates if the user writes a command from keyboard.
 * @av: Pointer to strings with all arguments of input in each postiion.
 * Return: void.
 **/
int non_interactive(char **av)
{
  char error_msg[120];

  sprintf(error_msg, "%s: 0: Can't open %s\n", av[0], av[1]);
  write(2, error_msg, strlen(error_msg));
  return (127);
}