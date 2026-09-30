/*Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include<stdio.h>
int main()
{
int n ,i,evenc=0, oddc=0;
printf("Enter array size ");
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter array elements ");
scanf("%d" ,&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
evenc++;
else 
oddc++;
}
printf("\nNumber of even numbers in array = %d", evenc);
printf("\n Number of odd numbers in array  = %d" , oddc);
return 0;
}
