//Searching an element
#include <stdio.h>
    void main ()
    {
        int i, j, r, c,ele,array[10][10],x,y,t=0;
        //printf("Enter the order of the matrix\n");
        scanf("%d %d", &r, &c);
        scanf("%d",&ele);
        //printf("Enter the co-efficients of the matrix\n");
        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j) 
            {
                scanf("%d", &array[i][j]);
            }
        }
         for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j) 
            {
                printf("%d \t",array[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < r; ++i) 
        {
            for (j = 0; j < c; ++j) 
            {
                 if(ele==array[i][j])
                 {
                      t=1;
                      x=i;
                      y=j;
                      break;
                 }
            }
         }
         if(t==1)
            printf("Element found AT index [%d][%d]",x,y);
         else
            printf("Element not found");
    }