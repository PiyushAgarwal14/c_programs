#include <stdio.h>

int main()
{
    float fer;
    float c;
    printf("Enter a temperature in fahrenheit \n");
    scanf("%f", &fer);
    
    c=((fer-32)*5)/9;
    printf("%.2f", c);
    return 0;
}
