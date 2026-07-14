#include <stdio.h>

int main(){
    float km;
    /*the metric unit with respect to 1km */
    float ft = 3280.8399;
    float cm =100000;
    float m = 1000;
    float in = 39370.079;


    printf("Enter the distance between the two cities in Kms: ");
    scanf("%f",&km);

    /*printing the output by rounding it upto 2 or 3 decimal places*/
    printf("The distance between 2 cities in:-\n feets: %.3f\n centimeters: %.2f\n meters: %.2f\n inches: %.2f",km*ft,km*cm,km*m,km*in);

    

    

}