//Sum of rows and columns
#include <stdio.h>
    void main ()
    {
        static int array[10][10];
        int i, j, r, c, sum = 0;
        //printf("Enter the order of the matrix\n");
        scanf("%d %d", &r, &c);
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
                sum = sum + array[i][j] ;
            }
             printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
         }
        for (j = 0; j < c; ++j) 
        {
            for (i = 0; i < r; ++i)
            {
                sum = sum + array[i][j];
            }
             printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
         }
    }