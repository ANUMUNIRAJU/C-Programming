#include<stdio.h>
int global = 100;          
int main()
{
   int local = 10;        
   printf("\nGlobal variable is %d",global);
   printf("\nLocal variable is %d",local);
   func1();
}
void func1()
{
 int block =50;
   printf("\nblock variable inside func1 is %d",block);  
}
