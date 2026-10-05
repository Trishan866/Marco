/*Write a C program to reverse the digits of a whole number*/
#include <stdio.h>
int main()
{
	int n,d=0,reversed=0;
	printf("Enter a number: ");
	scanf("%d" ,&n);
	while(n>0)
	{
		d=n%10;
		reversed = reversed*10 + d;
		n=n/10;
	}
	printf("Reversed digits = %d\n" ,reversed);
}
