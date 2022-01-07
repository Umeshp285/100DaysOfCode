#include<stdio.h>
#include<string.h>


void concate(char *s1 , char *s2)
{
//	printf("%s",s2);
	int j = 0 , len = 0;
	
	while(s1[len] != '\0')
	{
//		printf("%c",s1[len]);
		++len;
	}
	
	for(j = 0 ; s2[j] != '\0' ; ++j , ++len)
	{
//		printf("%c",s1[len]);
		s1[len] = s2[j];
	}
	
	s1[len] = '\0';
	
	printf("Afer concatenation = %s\n",s1);
}
int main()
{
	char s1[] = "Umesh";
	char s2[] = "Patil";
	
	concate(s1 , s2);
}
