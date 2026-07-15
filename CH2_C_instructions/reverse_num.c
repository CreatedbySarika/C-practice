#include <stdio.h>
int main(){
    int rev ,num;
    printf("Enter a five digit number: ");
    scanf("%d",&num);

    /* this could be done in a loop but i have used the simplest logic */
    printf("%d",num%10);
    num = num/10;
    printf("%d",num%10);
    num = num/10;
    printf("%d",num%10);
    num = num/10;
    printf("%d",num%10);
    num = num/10;
    printf("%d",num%10);
    num = num/10;



}