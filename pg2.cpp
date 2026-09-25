/*Write a C program which accept integer no and print the multiplication of digits*/
#include <stdio.h>
int main()
{
	int n,m1=0,m=1;
	printf("Enter the number: ");
	scanf("%d" ,&n);
	while(n>0)
	{
		m1 = n%10;
		m=m*m1;
		n=n/10;	
	}
	printf("Multiplied value: %d\n" ,m);
	return 0;
}
