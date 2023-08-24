#include <stdio.h>

int main (){
    
    int a[100], i, n, j, b;
    
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    
    printf("Enter the elements of array: \n");
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // int ra[100];
    
    // for(i=0; i<n; i++) {
        // ra[i] = a[n-i-1];                //reverse an array
    // }
    
    // printf("Reverse array is: \n");
    
    // for(i=0; i<n; i++) {
    //     printf("%d", ra[i]);
    // }
    
    for(i=0; i<n; ++i){
        for(j=i+1; j<n; ++j){
            
            if(a[i] > a[j]) {
            
                b = a[i];
                a[i] = a[j];
                a[j] = b;
                
            }
            
        }
    }
    
    printf("Sorted array is: \n");
    
    for(i=0; i<n; i++){
        printf("%d \n", a[i]);
    }
    
    return 0;
    
}
