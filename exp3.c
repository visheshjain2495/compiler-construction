// Write a C program to simulate lexical analyzer for validating operators.

#include <stdio.h>
#include <string.h>

int main()
{
char s[5];
printf("\n Enter any operator:");
fgets(s, sizeof(s), stdin);
s[strcspn(s, "\n")] = '\0';

switch (s[0])
{
case '>':
    if (s[1] == '=')
        printf("Greater than or equal");
    else
        printf("Greater than");
    break;

case '<':
    if (s[1] == '=')
        printf("Less than or equal");
    else
        printf("Less than");
    break;

case '=':
    if (s[1] == '=')
        printf("Equal to");
    else
        printf("Assignment");
    break;

case '!':
    if (s[1] == '=')
        printf("Not equal");
    else
        printf("Logical NOT");
    break;

case '&':
    if (s[1] == '&')
        printf("Logical AND");
    else
        printf("Bitwise AND");
    break;

case '|':
    if (s[1] == '|')
        printf("Logical OR");
    else
        printf("Bitwise OR");
    break;

case '+':
        printf("Addition");
        break;

case '-':
        printf("Subtraction");
        break;

case '*':
        printf("Multiplication");
        break;

case '/':
        printf("Division");
        break;

case '%':
        printf("Modulus");
        break;

default:
        printf("Not an operator");
}

return 0;
}