/*Write a C program to take input from user and display the output in the screen as a array.*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter range: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The output: ");
	for(i=0;i<5;i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
} 
