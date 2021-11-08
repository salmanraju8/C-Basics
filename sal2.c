#include<stdio.h>
void main()
{
	int a,b,c;
	a=30;
	b=20;
	c=10;
	printf("%d",(a>b)&&(b>c));
	printf("\n%d",(a<b)||(b>c));
	printf("\n%d",(a>b)&&(b<c));

}
