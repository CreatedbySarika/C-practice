#include <stdio.h>
int factorial(int n){
    int x;
    if(n==1)
        return 1;
    else
        x= n * factorial(n-1);
    
    return x;

}
int main(){
    int choice;
    while(choice!=4)
    {
        printf("what would you like to calculate press:\n[1]Factorial of a number\n[2]Prime or not\n[3]odd or even\n[4]Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                printf("Factorial Selected\n");
                int num;
                printf("Enter a number: ");
                scanf("%d",&num);
                printf("The factorial of the %d is %d\n********************************\n",num,factorial(num));
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