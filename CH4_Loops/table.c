#include <stdio.h>

int main(){
    int num,mul,out;

    printf("Enter a number for the table: ");
    scanf("%d",&num);

    for(mul=1;mul<=10;mul++)
    {
        printf("%d * %d = %d\n",num,mul,num*mul);
    }
    
}