#include "simple_shell.h"

/**
* sig_handler -
*
*@sig:
*/

void sig_handler(int sig)
{
	if (sig)
		write(STDIN_FILENO, "\n#shell$ ", 9);
}
