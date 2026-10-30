/*Write a C program to check a number is a perfect no or not(using while loop)*/
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(n==sum)
	   printf("It is a perfect number.");
	else
	   printf("It is not a perfect number.");
	return 0;
}
