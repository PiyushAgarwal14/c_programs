#include <stdio.h>
#include <string.h>
#include<conio.h>
void main()
{
    char keyword[32] [10] = {"auto", "const", "double", "float", "int", "short", "struct", "unsigned",
    "break", "continue", "else", "for",
        "long", "signed", "switch", "void", "case", "default", "enum", "goto", "register", "sizeof", 
        "typedef", "volatile", 
        "char", "do", "extern", "if", "return", "static", "union", "while"
    };
    
    int flag=0,i;
    char string[10];
    printf("Enter a string: \n");
    scanf("%s", string);
    
    
    
    for(i=0; i<32; i++){
        if(strcmp(string,keyword[i])==0){
            flag=1;
        }
    }

    if (flag==1){
        printf("%s is a keyword", string);
    }
    else
    {
            printf("%s is not a keyword", string);
    }
    getch();
}
