#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "simple_shell.h"

int SHELL(char **string_character);

int SHELL(char **string_character)
{
	if (!(*string_character))
		return (0);

	else
	{
		size_t counter_character = 0;

		write(1, "#SHELL$", 7);
		if (getline(&(*string_character), &counter_character, stdin) != EOF)
		{
			write(1, (*string_character), strlen((*string_character)));
			free(*string_character);
			(*string_character) = "TRUE";
		}
	}

	return (SHELL(string_character));
}

int main(void)
{
	char *string_character = "TRUE";

	return (SHELL(&string_character));
}
