#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int total, step=1;
	printf ("\nInsert total number you want to sort(example: 5): ");
	scanf ("%d" , &total);
	printf ("\nInsert all numbers you want to sort: ");
	int num[total];
	for (int i = 0; i < total; i++) 
		scanf ("%d" , &num[i]);
	/*
	printf("This is your numbers: " );
	for (int i = 0; i < total; i++){
		printf ("%d " , num[i]);
		if (i == total - 1) printf ("\n" );
	}
	*/
	int temptotal = total;
	int loop = 1;
	struct timespec tstart={0,0}, tend={0,0};
	clock_gettime(CLOCK_MONOTONIC, &tstart);
	for (int a = 0; a < total; a++)
	{
		int i = 0;
		printf ("\n\nloop %d", loop);
		for (int j = (i + 1); j <= temptotal; j++)
		{
			if (num[j] < num[i])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
			printf ("\nstep %d = ", step);
			step++;
			for (int i = 0; i < total; i++)
				printf("%d " , num[i]);
			i++;
		}
		temptotal--;
		loop++;
	}
	clock_gettime(CLOCK_MONOTONIC, &tend);
	printf("\n\nExecution Time: %.2f nanoseconds", (
        	(((double)tend.tv_sec + 1.0e-9*tend.tv_nsec) - 
        	((double)tstart.tv_sec + 1.0e-9*tstart.tv_nsec))*1000000000));
	printf ("\n\nAfter bubble sorting: ");
	for (int i = 0; i < total; i++)
	{
		printf ("%d " , num[i]);
		if (i == total - 1) printf ("\n");
	}
}