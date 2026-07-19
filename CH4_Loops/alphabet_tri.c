#include <stdio.h>

int main(){
    int num = 72,start = 65;

    for(int i = 65 ;i<=num;num--)
    {               
        for(int j =i;j<num;j++)
        {
            printf("%c " ,j);
        }
    printf("\n");
    
    
    }
/*this prints the the triangle inverted*/
    for(int k = 71;k>=65;k--)
    {
        //this is for indentation 
        for (int ind = 71; ind > k;ind--)
        {
            printf("  ");
        }
        for (int l =k;l>=start;l--)
        {
            
            printf("%c ",l);
        }
        
    printf("\n");
    }
}