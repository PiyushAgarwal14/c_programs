#include <stdio.h>


int main () 
{    
    int a[100], i, n, f, x, b, j, ra[100];
    int operation;
    
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    
    printf("Enter the elements in array: \n");
    
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    
    printf("\n Choose : 1 to Display array \n Choose : 2 to sort array \n Choose : 3 to reverse an array \n Choose: 4 to search in array \n");
    scanf("%d",&operation);
    
    switch (operation)
    {
    
        case 1: 
        
            printf("Display array: \n");
            
            for(i=0; i<n; i++) 
            {
                printf("%d", a[i]);
            }
            
        printf("\n Choose : 1 to Display array \n Choose : 2 to sort array \n Choose : 3 to reverse an array \n Choose: 4 to search in array \n");
        scanf("%d",&operation);
            
        case 2:
        
            printf("Sort an array in ascending order: \n");
            
            for(i=0; i<n; i++) 
            {
                for(j=i+1; j<n; j++) 
                {
                    
                    if(a[i]>a[j]) 
                    {
                        b = a[i];
                        a[i] = a[j];
                        a[j] = b;
                    }
                }
            }
            
            for(i=0; i<n; i++) 
            {
                printf("%d", a[i]);
            }
        
             printf("\n Choose : 1 to Display array \n Choose : 2 to sort array \n Choose : 3 to Reverse an array \n Choose: 4 to search in array \n");
             scanf(" %d",&operation);
             
        case 3:
        
            printf(" \n Reverse an array: \n");
            
            for(i=0; i<n; i++) 
            {
                
                ra[i] = a[n-i-1];    
            
            }
            
            for(i=0; i<n; i++) 
            {
                printf("%d", ra[i]);
            }
            
            printf("\n Choose : 1 to Display array \n Choose : 2 to sort array \n Choose : 3 to Reverse an array \n Choose: 4 to search in array \n");
            scanf(" %d",&operation);
        
        case 4:
        
            printf(" \n Enter an element to search: \n");
            scanf("%d", &x);
            
            f=0;
            
            for(i=0; i<n; i++) 
            {
                
                if(a[i]==x) 
                {
                    f=1;
                    break;
                }
            }
            
            if(f==1) 
            {
                printf("\n %d is present at index %d \n", x, i+1);
            }
            
            else
            {
                printf("\n %d is not present \n", x);
            }
            
    }
    
    return 0;
}
