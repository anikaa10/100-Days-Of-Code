/*Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
int n,i,posc=0,negc=0,zeroc=0;
printf("Enter array size ");
scanf("%d",&n);
int arr[n];
printf("Enter array elements ");
for (i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
if(arr[i]>0)
posc++;
else if(arr[i]<0)
negc++;
else
zeroc++;
}
printf("\n Number of positive numbers = %d" , posc);
printf("\n number od negative numberas = %d ", negc);
printf("\n number of zeroes = %d " , zeroc);
return 0;
}

