/*Fibonacci series-0,1,1,2,3,5,8.... upto n terms*/
#include <stdio.h>
int main()
{
	int n,a=-1,b=1,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		sum=a+b;
		printf("%d\t" ,sum);
		a=b;
		b=sum;
		i++;
	}
}
