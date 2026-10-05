/*Write a C program to count the digits of a whole no.*/
#include <stdio.h>
int main()
{
	int n,ct=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>0)
	{
		ct++;
		n=n/10;
	}
	printf("The no. of digits = %d\n" ,ct);
}
