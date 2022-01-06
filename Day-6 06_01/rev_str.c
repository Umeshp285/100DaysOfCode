#include<stdio.h>
#include<string.h>

void reverse(char *str)
{
	int temp , i;
	printf("string = %s\n",str);
	int len = strlen(str);
	
	for(i = 0 ; i < len/2 ; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
int main()
{
	char str[50] = "Apple";
	
	reverse(str);
	
	printf("reversed string = %s\n", str);
}
