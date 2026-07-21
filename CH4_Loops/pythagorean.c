#include <stdio.h>

int main(){
    //a**2 +b**2 = c**2

    int a,b,c;

    for(a=1;a<=30;a++)
    {
        for(b=1;b<=30;b++)
        {
            for(c=1;c<=30;c++)
            {
                if(a *a + b* b== c* c)
                {
                    printf("%d ,%d, %d \n",a,b,c);
                }
            }
        }
    }
}