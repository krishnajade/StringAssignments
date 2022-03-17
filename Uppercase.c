// Accept a string, convert entire string in upper case and print
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void ConvertToUpper(char str[]);

void main()
{
    char s[20];
    // Accept a string
    printf("Enter a string\n");
    gets(s);
    // Function call to convert string to upper case
    ConvertToUpper(s);
}

void ConvertToUpper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] -= 32;
        }
        else
        {
            str[i] = str[i];
        }
    }
    printf("Upper case string is : %s", str);
}