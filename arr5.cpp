/*Write a C program to find the average number of all elements in a array.*/
#include<stdio.h>
int main()
{
	int i,n,temp; 
	printf("Enter no. of elements: ");
	scanf("%d" ,&n);
	int arr[n];
	printf("Enter the elements: " );
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	for(i=0; i<n/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i]=temp;
	}
	printf("The reversed numbers = ");
	for(i=0; i<n; i++)
	{
		printf("%d\n" ,arr[i]);
	}
	printf("\n");
	return 0;
}
