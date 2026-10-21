//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int sum = 0;

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
                sum = sum + a[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}
