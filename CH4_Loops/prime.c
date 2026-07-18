#include <stdio.h>

int main() {
    int prime,num,div;
    /*Range for prime numbers to be printed*/
    for(num=2;num<=300;num++)
    {
        prime = 1;/* prime here acts as a counter */
        for(div=2;div<num;div++){
            if(num % div==0){   /*if the number is divisible the prime counter turn 0 and breaks*/         
                prime = 0;
                break;
            } 
        }
    if(prime)
            printf("%d ",num) ;
    }
}