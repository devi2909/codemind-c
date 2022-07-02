#include<stdio.h>
#include<math.h>
int is_prime(int l)
{
    if(l==1)
    return 0;
    for(int i=2;i<int(sqrt(l)+1);i++)
    {
        if(l%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,j,i,c=0,t1,t2;
        scanf("%d",&a);
        i=0;
        j=-1;
        while(a)
        {
            if(is_prime(a+i)==1)
            {
                t1=a+i;
                break;
            }
            i++;
        }
        while(a)
        {
            if(is_prime(a+j)==1)
            {
                t2=a+j;
                break;
            }
            j--;
        }
        if(t1-a>=a-t2)
        printf("%d
",t2);
        else
        printf("%d
",t1);
    }
}