// C CODE TO REVERSE THE GIVEN ARRAY
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("ENter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    int ans[n],k=0;
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array before reversing : ");
    for(int i=0;i<n;i++)
    {
       printf("%d  ",arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
         ans[k]=arr[i];
         k++;
    }
  printf("array after reversing : ");
    for(int i=0;i<n;i++)
    {
       printf("%d  ",ans[i]);
    }
}