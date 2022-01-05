#include<stdio.h>

#define SIZE 5

void printArray(void *ptr , int size , int type)
{
	int i = 0;
	for(i=0;i<size;i++)
	{
		switch(type)
		{
			case 1:
				printf("%d, ", *((int *)ptr+i));
				break;
			
			case 2:
				printf("%f, ", *((float *)ptr+i));
				break;
				
			case 3:
				printf("%c, ", *((char *)ptr+i));
				break;
		}
		}	
}


int main()
{
	int num[SIZE] = {10,20,30,40,50};
	float fractions[SIZE] = {1.1f,1.2f,1.3f,1.4f,1.5f};
	char chars[SIZE] = {'c','o','e','d','g'};
	
	printf("\nElements in int array:");
	printArray(&num , SIZE , 1);

	printf("\nElements in int array:");
	printArray(&fractions , SIZE , 2);

	printf("\nElements in char array:");
	printArray(&chars , SIZE , 3);
	
	return 0;
}


