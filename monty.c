#include "monty.h"

int main(int ac, char **av)
{
	FILE *bytecode = fopen(av[1], "r");
	char *m = NULL;
	int f = 1;
	size_t d;

	while (getline(&m, &d, bytecode) != -1)
	{
		printf("%s\n", m);
	}
	printf("%s\n ", m);
}
