#include<stdio.h>
int main()
{
    int n,arr[100],i,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            r=arr[i];
        }
    }
    printf("%d",r);
}