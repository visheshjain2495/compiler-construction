// Write a C program to count blank space and count the no. of lines

#include <stdio.h>
#include <string.h>
int main()
{
int flag = 1;
int i;
int j = 0;
char temp[100];
printf("Enter the Sentence (add '$' at the end) :: \n\n");
while((i=getchar())!='$')
{
if(i==' ')
i='*';
else if(i=='\t')
i='@';
else if(i=='\n')
flag++;
temp[j++]=i;
}
temp[j] = '\0';
printf("\n\n\nAltered Sentence :: \n\n");
puts(temp);
printf("\n\nNo. of lines = %d",flag);
return 0;
}