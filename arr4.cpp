/*Write a C program to find the average number of all elements in a array.*/
#include<stdio.h>
int main()
{
	int i,n; 
	float average,sum=0.0;
	printf("Enter no. of elements: ");
	scanf("%d" ,&n);
	int arr[n];
	printf("Enter the elements: " ,n);
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
		sum = sum+arr[i];
	}
    average = sum/n;
	printf("The average of the numbers = %.2f\n" ,average);
	return 0;
}
