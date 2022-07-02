#include<stdio.h>
int fact(int s)
{
    int mul=1;
    while(s>0)
    {
        mul=mul*s;
        s--;
    }
    return mul;
}
int main()
{
    int n,m,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        m=fact(arr[i]);
        printf("%d
",m);
    }
}