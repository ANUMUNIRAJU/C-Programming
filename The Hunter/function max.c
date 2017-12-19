int main ()
{
int a = 100;
int b = 200;
int ret;
ret = max(a, b);
printf( "Max value is : %d", ret );
return 0;           
}
int max(int num1,int num2) 
{
int ret; 
if (num1 > num2)
 ret = num1;
else
 ret = num2;
return ret; 
}
