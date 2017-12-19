#include <stdio.h>

int main()
{int i;
	int n=8;
	int a[10]={10 ,45 ,60 ,32 ,67 ,88, 99, 10};
	int max;
	max=find(a,n);
      printf("%d",max);
	return 0;
}
int find(int a[],int n)
{
	int temp,i;
	temp=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>temp)
		{
			temp=a[i];
		}
	}return temp;
}
