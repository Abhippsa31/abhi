//Multiplication of 2 matrices
#include<stdio.h>    
void main()
{  
     int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
     scanf("%d%d",&r,&c);    
     for(i=0;i<r;i++)    
     {
          for(j=0;j<c;j++)    
          {
               scanf("%d %d",&a[i][j],&b[i][j]);  
          }
     }
     // For mutiplying
     for(i=0;i<r;i++)    
     {    
          for(j=0;j<c;j++)    
          {    
               mul[i][j]=0;    
               for(k=0;k<c;k++)    
               {    
                    mul[i][j]+=a[i][k]*b[k][j];    
               }
          }
     }    
     //for printing result    
     for(i=0;i<r;i++)    
     {
          for(j=0;j<c;j++)    
          {
               printf("%d\t",mul[i][j]);    
          }
          printf("\n");    
     }
      
}  