/*Write a C program to find the smallest number in a array.*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter no. of elements: ");
	scanf("%d" ,&n);
	int arr[n];
	printf("Enter the elements: " ,n);
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int min = arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
		  min=arr[i];
	    }
	}
	printf("The smallest element = %d\n" ,min);
	return 0;
}
