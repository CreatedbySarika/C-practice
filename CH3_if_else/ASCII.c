#include <stdio.h>

int main(){
    char ch,num;

    printf("Enter a charachter : ");
    scanf("%c",&ch);

    num = ch;

    if(ch>=65 && ch<=90)
        printf("it is a Capital letter");
    else if(ch>=97 && ch<=122)
        printf("It is a small case letter");
    else if(ch>=48 && ch <= 122)
        printf("It is a number");
    else
        printf("It is a special Character");
}