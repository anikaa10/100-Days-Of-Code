/*Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int n, i, key;
    int arr[100];
    int index = -1;
    printf("Enter array size ");
    scanf("%d", &n);
    printf("Enter array elements ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index == -1)
    {
        printf("-1");
    }
    else
    {
        printf("Found at index %d", index);
    }

    return 0;
}
