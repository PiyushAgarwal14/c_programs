// switch case using function
#include <stdio.h>

void fertocel(){
    float f, c;
    printf("Enter fernheit \n");
      scanf("%f", &f);
      
      c = (f - 32) *5/9;
      printf("%.2f",c);
}

void fetome(){
      float ft,m;
      printf("Enter feet \n");
      scanf("%f", &ft);
      
      m = ft/3.2808399;
      printf("%f", m);
}

int main() {
  int num;
  
  printf("Choose option: \n");
  printf("1 for farenheit to celcius\n");
  printf("2 for feet to meter \n");
  scanf("%d",&num);
  
  switch (num) {
    case 1:
      fertocel();
      break;
    case 2:
     fetome();
      break;
  }
    
  return 0;
}
