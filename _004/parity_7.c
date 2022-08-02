#include<stdio.h>
int function_isValid(int n)
{
     int count=0;
     while(n>0)
     {
         int m=n%2;
         n=n/2;
         if(m==1)
             count++;
     }

      if(count%2!=0)
          printf("odd\n");
          
      else
          printf("even\n");
          
}
int main()
{
    int n,k;
    scanf("%d",&n);
    function_isValid(n);
}
