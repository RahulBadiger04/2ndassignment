// C program to find GCD of two numbers 
#include <math.h> 
#include <stdio.h> 

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
	// Find Minimum of a and b 
	int result = ((a < b) ? a : b); 
	while (result > 0) { 
		if (a % result == 0 && b % result == 0) { 
			break; 
		} 
		result--; 
	} 
	return result; // return gcd of a and b 
} 

// Driver program to test above function 
int main() 
{ 
	int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
	printf("GCD of %d and %d is %d ", a, b, gcd(a, b)); 
	return 0; 
}
