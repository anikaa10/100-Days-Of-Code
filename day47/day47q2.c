//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i = 0, j, start = 0;
    int length = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            length++;
        }
        else
        {
            if(length > maxLength)
            {
                maxLength = length;
                start = i - length;
            }

            length = 0;
        }

        i++;
    }

    /* Check the last word */
    if(length > maxLength)
    {
        maxLength = length;
        start = i - length;
    }

    /* Copy longest word */
    for(j = 0; j < maxLength; j++)
    {
        longest[j] = str[start + j];
    }

    longest[j] = '\0';

    printf("%s", longest);

    return 0;
}
