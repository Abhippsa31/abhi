#include<stdio.h>
#include<math.h>
void main()
{
     char c[10];
     int l=0,s=0,i,j,p=0;
     char h[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
     scanf("%s",c);
     for(i=0;c[i]!='\0';i++)
          l++;
     for(i=l-1;i>0;i--)
     {
          for(j=0;j<10;j++)
          {
               if(c[i]==h[j])
               {
                    s=s+(j*pow(16,p));
               }
          }
          p++;
     }
     printf("%d",s);
}