// Accept a string from user in array A[10].
// Copy the contents in array B[10].
// Print array B[10]
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int len;
void CopyString(char a[], char b[]);

void main()
{
    char A[10], B[10];
    printf("Enter a string\n");
    gets(A);
    printf("Input string is %s\n", A);
    CopyString(A, B);
}
void CopyString(char a[], char b[])
{
    for (int i = 0; a[i] != '\0'; i++)
        len = i;

    for (int i = 0; i <= len; i++)
        b[i] = a[i];

    printf("Output string is %s", b);
}
