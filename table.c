#include<stdio.h>
int main()
{
    int n, i;
    printf("enter the table number:");
    scanf("%d",&n);
    i=1;
    while(i<11)
    {
        printf("\n%d*%d=%d",n,i,n*i);
        i++;
    }
}
