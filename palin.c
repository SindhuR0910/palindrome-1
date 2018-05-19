#include <stdio.h>
#include <string.h>

int main()

{
    char a[50],b[50];
    printf("\n enter the string");
    scanf("%s",&a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}

