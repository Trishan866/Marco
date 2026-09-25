/*Write a C program to find sum of following series: 1!+3!+5!+...upto n numbers*/
#include <stdio.h>
int main()
{
	int i=1,n,c=1,a=1;
	long int fact, sum=0;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	while(c<=n)
	{
		i=1;
		fact=1;
		while(i<=a)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		c++;
		a=a+2;
	}
	printf("Sum of numbers= %d" ,sum);
	return 0;
}
