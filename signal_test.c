#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	sig_action(int sig)
{
	printf("ctrl + c input\n");
	exit(0);
}

int main()
{

	signal(SIGINT, sig_action);

	int i;
	i = 0;
	while (1)
	{
		printf("%d\n", i);
		i++;
		usleep(1000 * 1000);
	}
	return (0);
}
