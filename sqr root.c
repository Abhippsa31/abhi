#include<stdio.h>
#include<math.h>
void sqroot(int x)
{
     float s=0;
     int i;
     if(x>0)
     {
          s=x/2;
          for(i=1;i<=x;i++)
          {
               s=(s+(x/s))/2;
          }
          printf("Square root of %d = %f",x,s);
     }
     else
     {
          printf("Negative number entered");
     }
}
void main()
{
     void sqroot(int);
     int n;
     scanf("%d",&n);
     sqroot(n);
}