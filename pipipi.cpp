/*
    4     
   434    
  43234   
 4321234  
432101234 
*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4-i;j++)
		{
			printf(" ");
		}
		for(j=4;j>=4-i;j--)
		{
			printf("%d",j);
		}
		for(k=5-i;k<=4;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	
	return 0;
}
