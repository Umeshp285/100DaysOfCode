#include <stdio.h>


int add(int a, int b)
{
	int sum;
	sum = a+b;
	
	return sum;
}

int sub(int a, int b)
{
	int diff;
	diff = a-b;
	
	return diff;
}
int main()
{
	int sum,diff;
	
	int (*arith)(int , int);
	
	arith = add;
	sum = arith(10,20);
	printf("sum = %d\n",sum);
	
	arith = sub;
	diff = arith(20,10);
	printf("Diff = %d\n",diff);
	
	
}
