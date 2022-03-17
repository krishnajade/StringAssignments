// Concatenate two strings and print the output
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void concat(char s1[], char s2[], char s3[]);
void main()
{
    char a[10], b[10], c[20];
    // Accept two strings
    printf("Enter first string\n");
    gets(a);
    printf("Enter second string\n");
    gets(b);
    // Call function to concatenate two strings
    concat(a, b, c);
}

void concat(char s1[], char s2[], char s3[])
{
    int i, j;
    printf("Output string \n");
    for (i = 0; s1[i] != '\0'; i++)
    {
        s3[i] = s1[i];
        printf("%c", s3[i]);
    }
    printf(" ");
    for (int k = 0, j = i; s2[k] != '\0'; j++, k++)
    {
        s3[j] = s2[k];
        printf("%c", s3[j]);
    }
}