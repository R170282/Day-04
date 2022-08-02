#include<stdio.h>
int maximum_Cuts(int n)
{
     int m;
     m=(n*(n+1)/2)+1;
     return m;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=maximum_Cuts(n);
    printf("%d\n",k);
    return 0;
}
