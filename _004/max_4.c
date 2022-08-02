#include<stdio.h>
int maximizeMoney(int n,int k)
{
     int amount=0;
     int i=1;
     while(i<=n)
     {
	amount=amount+k;
        i+=2;
     }
     return amount;
     //printf("%d\n",amount);
}
int main()
{
    int n,k,p;
    scanf("%d %d",&n,&k);
    p=maximizeMoney(n,k);
    printf("%d\n",p);
    return 0;
}

