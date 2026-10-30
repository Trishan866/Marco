/*Write a C progam to check a no is prime or not(using while loop)*/
#include<stdio.h>
int main()
{
	int i=2,n,f=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
		i++;
	}
	if(f==0)
	  printf("It is a prime number.");
	else
	  printf("It is not a prime number");
}
