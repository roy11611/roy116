#include <stdio.h>

int main()
{
    double height, weight = 0;
    double bmi =  0;

    scanf("%lf", &weight);
    scanf("%lf", &height);

    bmi = weight / (height * height);
 
    if(bmi > 25.0) {
        printf("Overweight\n");
    }
    if(bmi >= 18.5 && bmi <= 25.0) {
        printf("Normal weight\n");
    }
    if(bmi < 18.5) {
        printf("Underweight\n");
    }    
    return 0;
}