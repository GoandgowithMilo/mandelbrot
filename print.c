#include <stdio.h> 

int main(int argc, char *argv[])
{

	// each 1 represents 0.1 on the graph from 1.0 to -1.0
	for(int j = 0; j < 20; j++)
	{	

		int count = 0;

		// each 1 represents 0.1 on the graph from -1.5 to 0.5
		for(int i = 0; i < 20; i++)
		{
			while(count < 20)
			{
				printf("@");
				count++;
			}
		}

		printf("\n");

	}

	return 0;
}
