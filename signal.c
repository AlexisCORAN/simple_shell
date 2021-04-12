#include "simple_shell.h"

void sig_handler(int sig)
{
	if (sig)
		write(STDIN_FILENO, "\n#shell$ ", 9);
}
