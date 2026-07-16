#include <stdio.h>
#include <string.h>
int main(){
    int num,digits=0,sum,x=1,orignal;
    
    char ones = "1";
    printf("Enter a number:");
    scanf("%d",&num);
    orignal = num;
    while(num !=0){
        num%10;
        digits++;
        num=num/10;
    }

    while(x<=digits){
       strcat(ones,"1");
       x++;
    }

    int oness = atoi(ones);

    sum = orignal+ones;
    printf("The number after adding ones is:%d ",sum);


}