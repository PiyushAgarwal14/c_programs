#include <stdio.h>

int main()
{
    int a[100], i, j, n;
    
    
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    
    printf("Enter elements in array: \n");
    
    for(i=0; i<n; i++){
        scanf("%d \n \n", &a[i]);   
    }
    
    
    for(i=0; i<n; i++) {
        
        for(j=i+1; j<n; j++){
            if(a[i]==a[j]) {
                printf (" %d", a[i]);
            }
        }
        
    }

    return 0;
}
