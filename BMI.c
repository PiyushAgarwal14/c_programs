#include <stdio.h>

int main()
{
    float h, w, BMI;
    
    h = h/100;
    
    printf("Enter your Height in Centimeter: ");
    scanf("%f",&h);
    
    printf("Enter your Weight in Kg: ");
    scanf("%f",&w);
    
    BMI = w/(h*h)*10000;
    
    printf("%.2f", BMI);
    
    if(BMI<=18.5){
        printf(" you are unhealthy");
    }
    
    if(BMI>18.5 && BMI<=24.9){
        printf(" you are healthy");
    }
    
    else
    printf(" you are overweight");
    
    return 0;
}
