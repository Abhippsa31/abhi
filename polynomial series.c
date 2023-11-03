//Polynomial Series
#include<stdio.h>
#include<math.h>
void main()
{
     int n,a,x,i;
     float s=0.0;
     scanf("%d%d%d",&n,&a,&x);
     s=pow(a,0);
     for(i=1;i<=n;i++)
     {
          s=s+(pow(a,i)*pow(x,i));
     }
     printf("Sum : %f",s);
}