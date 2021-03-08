#include<stdio.h>
int main()
{
    int n,i,check,j;
    int ugly[100]= {};
    scanf("%d",&n);
    i=1;
    j=0;
    while(i<=n)
    {
        if(i%2==0||i%3==0||i%5==0)
        {
            ugly[j]=i;
            printf("%d",ugly[j]);
        }
        i++;
        j++;
    }














    return 0;
}
