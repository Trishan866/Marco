/*Write a C program to display the odd nos from 1-n*/
#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter the number: ");
	scanf("%d" ,&n);
	printf("The odd nos are: ");
	while(i<=n)
	{
		if(i%2!=0)
		   printf("%d\n" ,i);
		   i++;
	}
	return 0;
}
