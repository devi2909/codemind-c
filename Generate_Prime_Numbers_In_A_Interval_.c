#include<stdio.h>
#include<math.h>
int is_prime(int l)
{
    if(l==1)
    return 0;
    for(int j=2;j<int(sqrt(l)+1);j++)
    {
        if(l%j==0)
        return 0;
    }
    return 1;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(is_prime(i)==1)
        printf("%d
",i);
    }
}