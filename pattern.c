#include <stdio.h>

int main()
{
    int row, i, j;
    
    printf("Enter number of rows: \n");
    scanf("%d",&row);

    //  print a pattern
    
    for (i=1; i<=row; ++i){
        for(j=1; j<=i; ++j){
            printf("*");
        }
        printf("\n");
    }
    
    // print a pattern in reverse
    
    for(i=row; i>=1; --i){
        for(j=1; j<=i; ++j){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
