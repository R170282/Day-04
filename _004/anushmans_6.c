#include<stdio.h>
int function_isValid(int n)
{
     if(n%5==0 || n==0)
        printf("yes\n");
     else
        printf("No\n");
}
int main()
{
    int n,k;
    scanf("%d",&n);
    function_isValid(n);
    return 0;
}
