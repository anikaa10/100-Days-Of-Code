//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int largest, secondLargest;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    secondLargest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}
