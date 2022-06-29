#include<stdio.h>
int main()
{
    int n,arr[100],i,se,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}