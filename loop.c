#include "shell.h"

/**
 *
 */
void loop(void)
{	
	char *input = NULL;
	char *arg = NULL;
	int numChar;

	while (true)
	{
		write (STDOUT_FILENO, "=> ", 3);
		input = read_line(&numChar);
		if (numChar != -1)
		{	
			if (input == NULL)
				continue;
			arg = // the token function
		}
	}

