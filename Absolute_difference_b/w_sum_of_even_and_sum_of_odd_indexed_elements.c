#include<stdio.h>
int main()
{
    int n,arr[100],i,e=0,o=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            o=o+arr[i];
        }
        else
        {
            e=e+arr[i];
        }
    }
    d=o-e;
    printf("%d",d);
}
