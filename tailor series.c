//Taylor's Series
#include<stdio.h>
#include<math.h>
void main()
{
     int n,x,i,p=1,j;
     float s=0.0,f=1.0;
     scanf("%d%d",&n,&x);
     j=1;
     for(i=1;i<=n;i++)
     {
          while(j<=p)
          {
               f=f*j;
               j++;
          }
          if(i%2==0)
          {
               s=s-(pow(x,p))/f;
          }
          else
          {
               s=s+(pow(x,p))/f;
          }
          p=p+2;
     }
     printf("Sum : %f",s);
}