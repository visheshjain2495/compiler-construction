// Write a C program to test whether a given identifier is valid or not

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char a[10];
    int flag = 1, i = 1;

    printf("\n Enter an identifier:");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    if(isalpha(a[0]))
    flag=1;
    else
    {
        printf("\n Not a valid identifier");
        return 0;
    }
    while(a[i]!='\0')
    {
        if(!isdigit(a[i])&&!isalpha(a[i]))
        {
            flag=0;
            break;
        }
        i++;
    }
    if(flag==1){
        printf("\n Valid identifier");
    }
    return 0;
}