/*
 * C Program to Find Sum of Array Elements using Loops and Variables
 */
 
#include <stdio.h>
 
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
 
    //Declaring array
    int arr[size];
    printf("Enter array elements\n");
 
    // Input array elements
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int sum=0;
 
    // Loop to find sum 
    for(int i=0;i<size;i++)
    sum+=arr[i];
 
    //Print sum
    printf("Sum of the array is: %d",sum);
 
    return 0;
}