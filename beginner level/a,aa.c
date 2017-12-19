#include <stdio.h>

int main(void)
{	
int a=9;
int b,c,d;
b=(a*10)+a;
c=(b*10)+a;
d=(c*10)+a;
int sum=a+b+c+d;
printf("%d",sum);        
return 0;
}
