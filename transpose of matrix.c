//Transpose of matrix
#include<stdio.h>
void main()
{
     int r,c,i,j,a[10][10],t[10][10];
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
               t[i][j]=a[j][i];
          }
     }
     printf("Matrix A: \n");
     for(i=0;i<=r-1;i++)
     {
          for(j=0;j<=c-1;j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     printf("Traspose Matrix: \n");
      for(i=0;i<=r-1;i++)
     {
          for(j=0;j<=c-1;j++)
          {
               printf("%d ",t[i][j]);
          }
          printf("\n");
     }
}