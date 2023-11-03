//max min of array
#include<stdio.h>
void main()
{
     int i,n,a[10],max,min;
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
          scanf("%d",&a[i]);
          
     }
     max=0;
     min=a[0];
     for(i=0;i<=n-1;i++)
     {
         if(min>a[i])
           min=a[i];
          if(max<a[i])
            max=a[i];
     }
     printf("MAx : %d\n",max);
     printf("Min : %d",min);
}