#include <unistd.h>
#include <stdio.h>

int main(void)
{
	printf("%d \t%p\n",STDIN_FILENO,stdin);
	printf("%d \t%p\n",STDOUT_FILENO,stdout);
	printf("%d \t%p\n",STDERR_FILENO,stderr);
	// printf("%d \t%p",STDIN_FILENO,stdin);
	return (0);
}