#include <stdio.h>

int main()
{
    int row, i, j, k=0;
    
    printf("Enter number of rows: \n");
    scanf("%d",&row);

    
    for (i=1; i<=row; ++i, k=0){
        for(j=1; j<=row-i; ++j){
            // double space
            printf("  ");
        }
        while(k!=2*i-1){
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    
    return 0;
}
