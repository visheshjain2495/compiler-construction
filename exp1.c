//Write a C program to identify whether a given line is a comment or not.

#include <stdio.h>
#include <string.h>

int main() {
    char com[30];
    int i = 2, a = 0;

    printf("\n Enter comment: ");
    fgets(com, sizeof(com), stdin);
    com[strcspn(com, "\n")] = '\0';

    if (com[0] == '/') {
        if (com[1] == '/') {
            printf("\n It is a comment");
        } else if (com[1] == '*') {
            for (i = 2; i < strlen(com) - 1; i++) {
                if (com[i] == '*' && com[i + 1] == '/') {
                    printf("\n It is a comment");
                    a = 1;
                    break;
                }
            }
            if (a == 0) {
                printf("\n It is not a comment");
            }
        } else {
            printf("\n It is not a comment");
        }
    } else {
        printf("\n It is not a comment");
    }

    return 0;
}