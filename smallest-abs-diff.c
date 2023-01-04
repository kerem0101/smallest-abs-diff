#include<stdio.h>
#include<stdint.h>
#include <string.h>


int main()
{
	int i,j, min;
	int numberOfArr = 0;
	scanf("%d",&numberOfArr);
	int arr[numberOfArr];
		
	for(i=0;i<numberOfArr;i++){
		scanf("%d",&arr[i]);
	}

	min = abs(arr[0] - arr[1]);
	
	for(i=0;i<numberOfArr;i++)
	{
		for(j=0;j<numberOfArr;j++)
		{
			if((abs(arr[i] - arr[j]) < min) && (i != j))
			{
				min = abs(arr[i] - arr[j]);	
				
			}	
		}	
	}
	
	for(i=0;i<numberOfArr;i++)
	{
		for(j=0;j<numberOfArr;j++)
		{
			if((abs(arr[i] - arr[j]) == min) && (i < j))
			{
				printf("%d ",arr[i]);
				printf("%d ",arr[j]);	
				
			}	
		}	
	}
	return 0;	
}
