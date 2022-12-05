#include <stdio.h>
#include <stdlib.h>

struct prod
{
    int id;
    char name[5];
    float price;
};

    int main() {
    int operation;


    struct prod e[5], temp;
    int i, n;
    
    printf("######################################################  AOA Project ############################################\n");
    printf("\n--------------------------------------------------------Price Check---------------------------------------------\n");
    printf("\n*******************************************************Made By Piyush Agarwal****************************************\n");
    for(i=0; i<5; i++)
    {
        printf("\n Enter Item %d Id, Name and Price \n", i+1);
        fflush(stdin);
        scanf("%d", &e[i].id);
        fflush(stdin);
        scanf("%s",e[i].name);
        fflush(stdin);
        scanf("%f", &e[i].price);
    }
    
    printf("\n choose an option \n 1) Display All Items \n 2) Search an Item \n 3) Sort: Price low to high: \n 4) Exit \n");
    scanf("%d", &operation);
    

    switch(operation)
    {
        case 1:
            for (i=0; i<5; i++)
        {
            printf("\n Item ID = %d", e[i].id);
            printf("\n Name = %s", e[i].name);
            printf("\n Price = %f", e[i].price);
            printf("\n");
        }
        
        printf("\n choose an option \n 1) Display All Items: \n 2) Search an Item: \n 3) Sort: Price low to high: \n 4) Exit\n");
        scanf("%d", &operation);

        case 2:
            printf("\n Enter Item Id to search for a Item: \n");
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
            
        printf("\n choose an option \n 3) Sort: Cost low to high: \n 4) Exit \n ");
        scanf("%d", &operation);
            
        case 3:
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
            
            printf("4) Exit");
            case 4:
            exit(1);
            break;
                
        
        default:
            printf("Error! Wrong option is choose by you");
    }

    return 0;
}
