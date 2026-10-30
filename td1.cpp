/*Write a C progam to check a no is prime or not(using for loop)*/
#include<stdio.h>
int main()
{
	int i,n,f=0;
	printf("Enter the number: ");
	scanf("%d" ,&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		  f=1;
	}
	if(f==0)
		printf("It is a prime number.");
	else
		printf("it is not.");
	return 0;
}
