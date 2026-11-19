/*96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main()
{
    char str[100], word[100];
    int i, j = 0, k;

    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            for(k = j - 1; k >= 0; k--)
            {
                printf("%c", word[k]);
            }

            j = 0;

            if(str[i] == ' ')
                printf(" ");
        }
    }

    // For the last word
    for(k = j - 1; k >= 0; k--)
    {
        printf("%c", word[k]);
    }

    return 0;
}

