/*Write a C program to print the following series:
1+10+101+1010+.....upto n terms*/
#include <stdio.h>
int main()
{
	int n;
	int i=1;
	long term=1;
	printf("Enter the numbers: ");
	scanf("%d" ,&n);
	printf("The series = ");
	while(i<=n)
	{
		printf("%d",term);
	if(i<n)
	{
		printf(", ");
  }
	if(i%2==1)
		{
			 term=(term*10);
		}
		else
		{
			term=(term*10)+1;
		}
		i++;
	}
	printf("\n");
	return 0;
}
