/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[], int size)
{
	int max=arr[0];
	for (int i=1;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	return max;
}

int min(int arr[], int size)
{
	int min=arr[0];
	for (int i=1;i<size;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	return min;
}


float average(int arr[], int size)
{
	int sum=0;
	for (int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	float avg=(float)sum/size;
	return avg;
}

int mode(int arr[], int size)
{
	int max=arr[0];
	for (int i=1;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	int counts[max+1];
	for (int j=0;j<max+1;j++)
	{
		counts[j]=0;
	}
	for (int i=0;i<size;i++)
	{
		counts[arr[i]]=counts[arr[i]]+1;
	}
	int largest=counts[0],pos;
	for (int j=0;j<max+1;j++)
	{
		if(largest<counts[j])
		{
			largest=counts[j];
			pos=j;
		}
		
	}
	return pos;
}

int factors(int n, int f[])
{
	
	int num=n,m=0,i=2;
	while(num!=1)
	{
		int flag=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
				
		}
		if (flag==0)
		{
			while(num%i==0)
			{
				num=num/i;
				f[m]=i;
				m++;
			}
				
			
		}
		i++;
	}
	
	return m;
}
