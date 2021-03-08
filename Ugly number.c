#include<stdio.h>
int main()
{
    int n,i,j,x;;
    int sum=0;
    int ugly[3]= {2,3,5};
    scanf("%d",&n);
    i=1;
    x=0;
    while(1)
    {
        j=i;
        while(x<3)
        {
            if(j%ugly[x]==0)
            {
                j=j/ugly[x];
            }
            else
            {
                x++;
            }
        }
        x=0;
        if(j==1)
        {
            sum++;
            if(sum==n)
            {
                printf("%d",i);
                break;
            }
        }
        i++;
    }
    return 0;
}
