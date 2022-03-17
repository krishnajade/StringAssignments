// Accept a string  from user and check if it is palindrom.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// Palindrom check function declaration
int Palindrom(char str[])
{
    int i, j, len;
    int temp = 1; // Set flag
    for (i = 0; str[i] != '\0'; i++);    
    // Loop to measure length of string
    len = i; // Variable storing length of string
    // Loop checking whether starting value equal to last value of string and so on
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j]) // If value doesn't match then drop the flag
        {
            temp = 0;
            break;
        }
    } // Otherwise flag stays
    return temp;
}

void main()
{
    char arr[10];
    // Accept string from user
    printf("Enter a string\n");
    gets(arr);
    // Call check palindrom function and accept return value as flag
    int temp = Palindrom(arr);
    // If the flag is UNCHANGED display the string is palindrom
    if (temp == 1)
        printf("\nThe string is Palindrom");
    else
        printf("\nThe string is not Palindrom");
}