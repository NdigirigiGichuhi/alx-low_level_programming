#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	int answer = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
		{
			answer = answer + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", answer);
}
