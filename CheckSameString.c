// Accept 2 strings from user and check if they are same. Give proper message.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// Declaration of check function
void check(char str1[], char str2[]);

void main()
{
    char s1[20];
    char s2[20];
    // Accept two strings from user
    printf(" Enter first string\n");
    gets(s1);
    printf("\n");
    printf(" Enter second string\n");
    gets(s2);
    printf("\n");
    // call Check string Function
    check(s1, s2);
}
void check(char str1[], char str2[])
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        // Compare elements of string 1 with string 2
        if (str1[i] != str2[i])
        {
            printf("Both strigs are not same");
            break;
        }
        else
        {
            printf("\nBoth strings are same");
            break;
        }
    }
}