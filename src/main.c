#include "../minishell.h"

int main(int argc, char **argv, char **env)
{
	char **a;
	char **e;

	argc = argc + 1;
	a = argv;
	e = env;
	set_signal();
	inital_screen();
	return (0);
}
