#include<stdio.h>
int main()
{
	int a=5,b=-7,c=0,d;

	//d=(++a && ++b || ++c );
	d=(++b || ++c);
	printf("\t\t%d",++c);
	
	//printf("%d\n%d\n%d\n%d\n",a,b,c,d);

}
