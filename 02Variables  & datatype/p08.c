//8. Write a C program to print the ASCII value of a character entered by the user.

#include<stdio.h>
int main()
{
    char character;
    printf("Enter character :");
    scanf("%c",&character);
    int ascii=character;
    printf("ASCII value =%d",ascii );
    return 0;
}
