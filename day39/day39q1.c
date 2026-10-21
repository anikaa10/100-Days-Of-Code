//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main()
{
    int a[10][10], diagonal[10];
    int rows, cols, i, j, k = 0;
    int flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);

            if(i == j)
            {
                diagonal[k] = a[i][j];
                k++;
            }
        }
    }

    // Check if diagonal elements are distinct
    for(i = 0; i < k; i++)
    {
        for(j = i + 1; j < k; j++)
        {
            if(diagonal[i] == diagonal[j])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
