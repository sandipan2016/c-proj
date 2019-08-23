#include<stdio.h>

main()
{
	int arr[5];
	int i=0;
	int sum=0;

    printf(" Enter elements in array\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			sum=sum+arr[i];
			printf("arr[i]=%d\n",arr[i]);
		}
		else
		{
			continue;
			
		}
		
	}
	printf(" Sum of even numbers = %d",sum);
	
	
	
	
}
