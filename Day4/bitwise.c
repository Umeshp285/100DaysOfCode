#include<stdio.h>

// Little Endian to Big Endian
/*unsigned int convert(unsigned int x)
{
	return (((x>>24) & 0x000000ff) | ((x >> 8) & 0x0000ff00) | ((x << 8) & 0x00ff0000) | ((x << 24) & 0xff000000)) ;
}

int main()
{
	int Little_End = 0xAABBCCDD;
	
	printf("Little endian = 0x%X\n",Little_End);
	
	printf("Big Endian = 0x%X\n" , convert(Little_End));
}*/

/**
* Rotate Bits
int main()
{
	int rotate,msb,size;
	int num = 12;
	int rotations = 2;
	
	size = (sizeof(int) * 8);
	
	rotate = rotate % size;
	printf("rotate = %d\n",rotate);
	
	while(rotate--)
	{
		msb = (num >> size) & 1 ;
		num = (num << 1) | msb;
	}
	
	printf("after rotation = %d\n",num);
	return 0;
	
}
*/



