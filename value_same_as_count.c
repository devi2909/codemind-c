#include<stdio.h>
int main()
{
    int n,a[100],i,j,sum=0,count=0,b[100],k=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count==a[i])
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[i]==b[j])
            {
                for(m=j;m<k;m++)
                b[m]=b[m+1];
                k--;
                j--;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        
    }
    printf("%d",i);
}