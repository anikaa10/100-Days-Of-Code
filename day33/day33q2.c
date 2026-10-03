/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main()
{
    int n, i, num, pos;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter the elements in sorted order: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    // Find the correct position
    pos = 0;

    while(pos < n && a[pos] < num)
    {
        pos++;
    }

    // Shift elements towards right
    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[pos] = num;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
