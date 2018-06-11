#include <stdio.h>
#include <stdlib.h>

int main() {
	int total, step=1;
	printf("\nInsert total number you want to sort(example: 5): ");
	scanf("%d" , &total);
	printf("\nInsert all numbers you want to sort: ");
	int num[total];
	for (int i=0;i<total;i++){
		scanf("%d" , &num[i]);
	}
	/*
	printf("This is your numbers: " );
	for (int i=0;i<total;i++){
		printf("%d " , num[i]);
		if (i==total-1) printf("\n" );
	}
	*/
	int sum=total;
	for(int a=0;a<total;a++){
		for(int i=0;i<sum-1;i++){
			for (int j=i+1;j<sum;j++){
				if(num[j] < num[i]){
					int temp=num[i];
					num[i]=num[j];
					num[j]=temp;
				}
				printf("\nstep %d = ", step);
				step++;
				for (int i=0;i<total;i++){
					printf("%d " , num[i]);
					if (i==total-1) printf("\n" );
				}
				i++;
			}
			i=0;
			sum--;
		}	
	}
	
	printf("\nThis is the result by bubble sort: " );
	for (int i=0;i<total;i++){
		printf("%d " , num[i]);
		if (i==total-1) printf("\n" );
	}
}