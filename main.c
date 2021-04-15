#include "simple_shell.h"

/**
* main - function main
*
*@ac: ounts the number of arguments.
*
*@av: contains the total number of arguments.
*
*@env: variable envirionment system.
*
*Return: estatus_exit value.
**/

int main(int ac, char *av[], char **env)
{
	int count = 1, status_exit = 0;

	signal(SIGINT, sig_handler);

	if (ac > 1)
	{
		status_exit = no_interactive(av);
		return (status_exit);
	}

	status_exit = interactive(av, count, env);
	return (status_exit);
}
