//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, j, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    while(str[length] != '\0')
    {
        length++;
    }

    // Reverse the string
    i = 0;
    j = length - 1;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("%s", str);

    return 0;
}
