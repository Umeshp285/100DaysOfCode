#include<stdio.h>

typedef int (*Operation)(int a, int b);

typedef struct _str{
	int result;
	Operation opt;
}STR;


int add(int a,int b)
{
	return a+b;
}

int multi(int a,int b)
{
	return a*b;
}

int main()
{
	STR obj;
	obj.opt = add;
	obj.result = obj.opt(5,2);
	
	printf("result = %d\n",obj.result);

	obj.opt = multi;
	obj.result = obj.opt(5,2);
	
	printf("result = %d\n",obj.result);
}
