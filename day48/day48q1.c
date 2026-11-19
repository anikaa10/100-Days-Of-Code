Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, n = 0;
    int flag = 0;
    char temp;

    scanf("%s", str1);
    scanf("%s", str2);

    // Find length
    for(i = 0; str1[i] != '\0'; i++)
        n++;

    // Check length of second string
    for(i = 0; str2[i] != '\0'; i++);

    if(i != n)
    {
        printf("Not rotation");
        return 0;
    }

    // Rotate str1 one position at a time
    for(i = 0; i < n; i++)
    {
        temp = str1[0];

        // Left shift
        for(j = 0; j < n - 1; j++)
        {
            str1[j] = str1[j + 1];
        }

        str1[n - 1] = temp;

        // Compare str1 and str2
        flag = 1;

        for(j = 0; j < n; j++)
        {
            if(str1[j] != str2[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            break;
    }

    if(flag == 1)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
