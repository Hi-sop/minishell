#include <readline/readline.h>
#include <readline/history.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **env)
{
	char *str;

	while (1)
	{
		str = readline("test : ");
		if (str)
			printf("%s\n", str);
		add_history(str);
		free(str);
	}
	return (0);
}
