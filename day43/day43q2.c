//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, length = 0;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while(str[length] != '\0')
    {
        length++;
    }

    i = 0;
    j = length - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
