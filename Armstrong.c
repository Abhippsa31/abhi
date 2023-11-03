#include<stdio.h>
void main()
{
    int n,num,d,s;
    scanf("%d",&n);
    s=0;
    num=n;
    while(num!=0)
    {
        d=num%10;
        s=s+(d*d*d);
        num=num/10;
    }
    if(n==s)
    {
        printf("%d is an Armstron Number",n);
    }
    else
      printf("%d is not an Armstrong Number",n);
}