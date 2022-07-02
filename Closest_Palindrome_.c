#include<bits/stdc++.h>
using namespace std;
int palindrome(int a)
{
    int r=0;
    int t=a;
    while(a!=0)
    {
        r=r*10+a%10;
        a/=10;
    }
    if(t==r) return 1;
    else return 0;
}
int main()
{
    int i,n,pl,pr;
    cin>>n;
    for(i=n-1;i>0;i--)
    {  
        if(palindrome(i)==1){ pl=i;  break;}
    }
    for(i=n+1;i>0;i++)
    {  
        if(palindrome(i)==1){ pr=i;  break;}
    }
   if((pr-n)<(n-pl)){ cout<<pr;}
   else if((pr-n)==(n-pl)) {cout<<pl<<" "<<pr;}
   else{ cout<<pl;}
}
