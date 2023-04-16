#include <stdio.h>

int main()
{
    int a, b, c, d;
    
    printf("Enter an Integer number a = \n");
    scanf("%d",&a);
    
    printf("Enter an Integer number b = \n");
    scanf("%d",&b);
    
    printf("Enter an Integer number c = \n");
    scanf("%d",&c);
    
    printf("Enter an Integer number d = \n");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("a = %d is greater Integer value \n", a);
    }    
    
    else if (b>c && b>d){
        printf("b = %d is a greater Integer value \n", b);
    }
    
    else if(c>d){
        printf("c = %d is a greater Integer value \n",c);
    }
    
    else {
        printf("d = %d is a greater Integer value \n", d);
    }

    return 0;
}
