#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,m,i;
        scanf("%d",&m);
        for(i=1;i<m;i++)
        {
            l=i*i;
            if(m==l)
            {printf("True
");
                break;
            }
            else if(l>m)
            {printf("False
");
                break;
            }
        }
    }
}