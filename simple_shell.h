#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

char *_getenv(const char *name);
int no_interactive(char **av);
void sig_handler(int sig);

#endif /* SIMPLE_SHELL_H */
