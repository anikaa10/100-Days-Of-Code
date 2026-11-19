/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main()
{
    char date[20];

    printf("ENTER DATE: ");
    scanf("%s", date);

    printf("%c%c-Apr-", date[0], date[1]);

    for(int i = 6; date[i] != '\0'; i++)
    {
        printf("%c", date[i]);
    }

    return 0;
}
