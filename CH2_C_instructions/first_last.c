#include <stdio.h>
 int main(){
    int num, sum;

    printf("Enter a 4 digit number: ");
    scanf("%d",&num);

    sum = num%10;
    num = num/1000;

    sum = sum +num;

    printf("%d",sum);

 }