#include<stdio.h>
#include<conio.h>
int main()
{
	char a[6]={"NATAP"};
	int i=0,j=0;
	for(i=0;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
	getch();
}
