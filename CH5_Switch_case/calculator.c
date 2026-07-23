#include <stdio.h>
int factorial(int n){
    int x;
    if(n==1)
        return 1;
    else
        x= n * factorial(n-1);
    
    return x;

}
void oddEven(int n){
    if(n%2==0)
        printf("%d is an Even Number",n);
    else
        printf("%d is a odd Number ",n);

}
void ifprime(int n){
    if(n==1)
        printf("1 is neither prime nor composite");
    
    if(n==2)
            printf("2 is a prime number");
    for(int i=2;i<n;i++)
    {     

        if(n%i==0)
        {
            printf("%d is a composite number",n);
            break;
        }
        
        else
        {
            printf("%d is a prime number",n);
            break;
        }    
    }
              

    

}
int main(){
    int choice;
    int num;
    while(choice!=4)
    {
        printf("what would you like to calculate press:\n[1]Factorial of a number\n[2]Prime or not\n[3]odd or even\n[4]Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                printf("Factorial Selected\n");
                
                printf("Enter a number: ");
                scanf("%d",&num);
                printf("The factorial of the %d is %d\n********************************\n",num,factorial(num));
                break;
            }
                
            case 2:
            {
                printf("prime check selected\n");
                printf("Enter a number: ");
                scanf("%d",&num);
                ifprime(num);
                printf("\n******************************\n\n");


                break;
            }
                
            case 3:
            {
                printf("odd or even\n");
                printf("Enter a number:");
                scanf("%d",&num);
                oddEven(num);
                printf("\n******************************\n\n");
                break;
            }
                
                
        }

    }
    
}