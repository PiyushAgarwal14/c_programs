
#include <stdio.h>

int main()
{
   int arr[5]={};
   int temp=0;
   int length=sizeof(arr)/sizeof(arr[0]);
   
   printf("Enter elements in array: \n");
   
   for(int i=0; i<length; ++i){
    scanf("%d", &arr[i]);    
   }
   
   
   printf("your elements in array are: \n");
   
    for(int i=0; i<length; ++i)
    {
        printf("%d", arr[i]);
    }
    
    printf("\n");

    
    for(int i=0; i<length; ++i)
    {
        for(int j=i+1; j<length; ++j)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    printf("\n");
    printf("sorted array are: \n");
    for(int i=0; i<length; ++i)
    {
        printf("%d", arr[i]);
    }
    
    return 0;
}
