#include <stdio.h>

int main(){
    int num = 72;

    for(int i = 65 ;i<=num;num--)
    {
               
        for(int j =i;j<num;j++)
        {
            printf("%c " ,j);
        }
    printf("\n");
    }
}