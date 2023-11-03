#include<stdio.h>
void main()
{
    int a,b,c,l1,l2,l3,g,l,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=1;(i<=a && i<=b && i<=c);i++)
    {
        if(a%i==0 && b%i==0 && c%i==0)
        {
            g=i;
        }
    }
    l1=a/g;
    l2=b/g;
    l3=c/g;
    l=l1*l2*l3*g;
    printf("GCD : %d\n",g);
    printf("LCM : %d",l);
}