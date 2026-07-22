#include <stdio.h>
int main(){
    int choice;
    while(choice!=4)
    {
        printf("Enter what would you like to calculate : press\n[1]Factorial of a number\n[2]Prime or not\n[3]odd or even\n[4]Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                printf("Factorial Selected\n");
                break;
            }
                
            case 2:
            {
                printf("prime check selected\n");
                break;
            }
                
            case 3:
            {
                printf("odd or even\n");
                break;
            }
                
                
        }

    }
    
}