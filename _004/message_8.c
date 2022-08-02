#include<stdio.h>
int  minimumMessages(int n)
{
     int m;
     m=2*(n-1);//because if sender consist one message reciever recieve other message 2*1-1=0,where n is the persons
     printf("%d",m);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    minimumMessages(n);
    return 0;
}
