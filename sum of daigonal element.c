//Sum of diagonal elements
#include<stdio.h>
void main()
{
     int r,c,i,j,a[10][10],dl=0,dr=0;
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
          dl=dl+a[i][i];
          dr=dr+a[i][r-i-1];
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
     printf("Left : %d \n",dl);
     printf("Right : %d",dr);
}