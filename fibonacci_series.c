#include <stdio.h>

int main()
{
    int a, b, c, n, i;
    
    a=0, b = 1;
    
    printf("Enter a number for fibonnaci series: \n");
    scanf("%d", &n);
    
    printf("\n");
    
    for(i=1; i<=n; i++) {
        
        c = a + b;
        printf("%d ", c);
        
        a = b;
        b = c;
    }

    return 0;
}
