#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
         if(min>=arr[i])
         min=arr[i];
     if(max<=arr[i])
     max=arr[i];
    }
    printf("Maximum no and maximum element in the array is %d %d ",min,max);
}