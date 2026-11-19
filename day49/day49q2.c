/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i, lastspace = 0;

    printf("ENTER NAME: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            lastspace = i;
    }

    printf("%c.", str[0]);

    for(i = 0; i < lastspace; i++)
    {
        if(str[i] == ' ')
            printf("%c.", str[i + 1]);
    }

    printf(" ");

    for(i = lastspace + 1; str[i] != '\0' && str[i] != '\n'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
