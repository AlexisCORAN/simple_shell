#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <fcntl.h>

/* shell functions **/
int no_interactive(char **av);
void sig_handler(int sig);
int interactive(char *av[], int count_exe, char **env);
int create_process(char *av[], int count_exe, char **env);
char *_getenv(char *name, char **env);
int print_env(char **env);
int function_exit(char *line, int status, char *av, int count);
int _atoi(char *arr);

char *validate_file(char *full_path, char *file);

/** functions srting **/
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);

/** memory allocate functions **/
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, int size);
unsigned int lenght_array(char **p);

#endif /* SIMPLE_SHELL_H */
