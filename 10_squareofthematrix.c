/*
     * C Program to Input an Array, Store the Squares of these Elements in an Array & Print it
     */
 
    #include <stdio.h>
    #define MAX_ROWS 3
    #define MAX_COLS 4
 
    void print_square(int [ ] );
    void main (void)
    {
 
        int i;
        int num [MAX_ROWS][MAX_COLS] ;
        printf("Enter the elements of the matrix : ");
        for(int i=0;i<MAX_ROWS;i++)
        {
            for(int j=0;j<MAX_COLS;j++)
             scanf("%d",&num[i][j]);
        }
        for (i = 0; i < MAX_ROWS; i++)
            print_square(num[i]);
 
    }
 
    void print_square(int x[ ])
    {
 
        int j;
        for (j = 0; j < MAX_COLS; j++)
            printf ("%d\t", x[j] * x[j]);
        printf("\n");
 
    }