#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *name = "HOME";

	char *value = getenv(name);

	for(int i = 0; i < sizeof(value); i++)
	{
		printf("%d\n", value[i]);
	}

	return 0;
}
