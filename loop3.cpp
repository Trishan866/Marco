/*Write a C program to print even nos upto 10*/
#include <stdio.h>
int main()
{
	int a=1;
	while(a<=10)
	{
		if(a%2==0)
		{
			printf("%d\n" ,a);
		}
		a++;
	}
	return 0;
}
