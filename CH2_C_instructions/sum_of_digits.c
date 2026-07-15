#include <stdio.h>
int main(){
    int num,sum=0;

    /*take user input*/
    printf("Enter a five digit number: ");
    scanf("%d",&num);

    /* this could be done in a loop */
    sum = num % 10;/*5th*/
    num = num/10;
    sum = sum + num%10; /*4th*/
    num = num/10;
    sum = sum + num%10; /*3rd*/
    num = num/10;
    sum = sum + num%10; /*2rd*/
    num = num/10;
    sum = sum + num%10; /*1st*/
    num = num/10;

    printf("%d",sum);

}