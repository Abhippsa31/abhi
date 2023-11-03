#include<stdio.h>
void main()
{
    int n,num,d1,d2,r1=0,r2=0,s1=0,s2=0,s=0;
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        d1=num%10;
        r1=r1*10+d1;
        num=num/10;
    }
    s1=n*n;
    s2=r1*r1;
    s=s1;
    while(s!=0)
    {
        d2=s%10;
        r2=r2*10+d2;
        s=s/10;
    }
    if(r2==s2)
       printf("%d is an Adam Number",n);
    else 
       printf("%d is not an Adam number",n);
}