/*Write a C program to find the largest number in a array.*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter no. of elements: ");
	scanf("%d" ,&n);
	if(n<=0)
	{
		printf("\n 	invalid size");
		return 1;
	}
	int arr[n];
	printf("Enter the elements: " ,n);
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int max = arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
		  max=arr[i];
	    }
	}
	printf("The largest element = %d\n" ,max);
	return 0;
}
