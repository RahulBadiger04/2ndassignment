// C PROGRAM TO CHECK WHETHER THE MATRIX IS IDENTICAL OR NOT
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the matrix : ");
    scanf("%d",&n);
    int mat1[n][n];
    int mat2[n][n];
    printf("Enter the elements of the 1st matrix : ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&mat1[i][j]);
    }
            printf("Enter the elements of the 2nd matrix : ");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&mat2[i][j]);
    }
        printf("Enter the elements of the 2nd matrix : ");
     int flag=0;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(mat1[i][j]!=mat2[i][j]){
            flag=1;
            break;
            }
        }
     }
     if(flag==1)
     printf("Given two matrices are not identical to each other \n");
     else
     printf("Two matrices are equal\n");
     return 0;

}
