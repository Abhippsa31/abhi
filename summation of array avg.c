//Summation and avg of array
#include<stdio.h>
void main()
{
     int n,i,s,a[10],avg;
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
          s=s+a[i];
     }
     avg=s/n;
     printf("%d\n",s);
     printf("%d",avg);
}