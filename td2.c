/*1-3+5-7+9-.... upto n terms*/
#include <stdio.h>
int main()
{
	int i=1;
	int n;
	int term=1;
	printf("Enter the numbers: ");
	scanf("%d" ,&n);
	printf("The series = ");
	while(i<=n)
	{
		printf("%d" ,term);
		if(i<=n)
		{
	if(i%2==1)
		{
			 printf("-");
		}
		else
		{
			 printf("+");
		}
	}
		term=term+2;
		i++;
	}
	printf("\n");
	return 0;
}
