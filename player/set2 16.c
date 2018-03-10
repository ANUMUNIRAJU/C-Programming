#include <stdio.h>

int main(void) {
	int a[20];
	int count=0,max=1;
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{ count++;
			}
		
		}
		if(count==0)
		printf("%d",a[i]);
	}
	return 0;
}
