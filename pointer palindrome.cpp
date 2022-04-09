#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0,rem=0,temp=0,rev=0;
	int *p,*r,*t,*s;
	p=&num;
	r=&rem;
	t=&temp;
	s=&rev;
	printf("\n enter a number");
	scanf("%d",&num);
	*t=*p;
	while(*p>0)
	{
		*r=*p%10;
		*s=*s*10+*r;
		*p=*p/10;
	}
	if(*t==*s)
	{
		printf("\n the given number is palindrome");
	}
	else
	{
		printf("\n the given number is not palindrome");
	}
	return 0;
}
