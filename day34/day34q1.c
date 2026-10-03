/*Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main()
{
    int a[100], n, pos, element, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position and element to insert: ");
    scanf("%d %d", &pos, &element);

    // Shift elements one position to the right
    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[pos] = element;

    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
