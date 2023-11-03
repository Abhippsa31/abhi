//Sum of two matrix
#include<stdio.h>
void main()
{
     int r,c,i,j,a[10][10],b[10][10],s[10][10];
     scanf("%d %d",&r,&c);
     for(i=0;i<=r-1;i++)
     {
          for(j=0;j<=c-1;j++)
          {
               scanf("%d",&a[i][j]);
          }
     }
      for(i=0;i<=r-1;i++)
     {
          for(j=0;j<=c-1;j++)
          {
               scanf("%d",&b[i][j]);
          }
     }
      for(i=0;i<=r-1;i++)
     {
          for(j=0;j<=c-1;j++)
          {
               s[i][j] = a[i][j] + b[i][j];
          }
     }
      for(i=0;i<=r-1;i++)
     {
          for(j=0;j<=c-1;j++)
          {
               printf("%d",s[i][j]);
          }
     }
}