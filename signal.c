#include "simple_shell.h"

/**
* sig_handler - check the parameter
*
*@sig: the number of the signal.
*/

void sig_handler(int sig)
{
	if (sig)
		write(STDIN_FILENO, "\n#shell$ ", 9);
}
