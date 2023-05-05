#include<stdio.h>
#include<conio.h>
main()
{
	int b;
	clrscr();
	printf("enter the value of b:-");
	scanf("%d",&b);
	(b%2==0)?printf("given numbet is even.") : printf("given number is odd");
	getch();
 }