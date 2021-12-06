#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0 && a%7==0)
	{
		printf("a divisible by 3 and 7");
    }
    else
	{
		printf("a not divisible by 3 and 7");
	}
}
