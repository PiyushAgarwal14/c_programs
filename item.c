#include <stdio.h>

struct prod
{
    int id;
    char name[5];
    float price;
};

int main()
{
    struct prod e[5], temp;
    int i, n;
    for(i=0; i<5; i++)
    {
        printf("\n Enter %d Item Id, Name and Price \n", i+1);
        fflush(stdin);
        scanf("%d", &e[i].id);
        fflush(stdin);
        scanf("%s",e[i].name);
        fflush(stdin);
        scanf("%f", &e[i].price);
    }
    
    // display all items
    for (i=0; i<5; i++)
    {
            printf("\n Item ID = %d", e[i].id);
            printf("\n Name = %s", e[i].name);
            printf("\n Price = %f", e[i].price);
            printf("\n");
    }
    
    printf("Enter Item Id to search for a product: \n");
    scanf("%d", &n);
    
    
    for(i=0; i<5; i++)
    {
        if(e[i].id==n)
        {
            printf("\n Item ID = %d", e[i].id);
            printf("\n Name = %s", e[i].name);
            printf("\n Price = %f", e[i].price);
            break;
        }
    }
    
    printf("\n------------------------------------------------");
    printf("\nPrice Low to High\n\n");
    for(i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(e[i].price>e[j].price){
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
                   
            }
        }
    }
    
    for (i=0; i<5; i++)
    {
            printf("\n Item ID = %d", e[i].id);
            printf("\n Name = %s", e[i].name);
            printf("\n Price = %f", e[i].price);
            printf("\n");
    }
    
    
    return 0;
}
