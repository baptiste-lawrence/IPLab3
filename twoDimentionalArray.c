#include <stdio.h>

void printArray(int values[5][3])
{
	int i, j;
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i ", values[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int array[5][3];
	int i, j;
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			array[i][j] = 3*i + j;
		}
	}
	printArray(array);
	return 0;
}
