#include <stdio.h>

int main() {
  int num;
  float f, c, ft, m;
  
  printf("Choose option: \n");
  printf("1 for farenheit to celcius\n");
  printf("2 for feet to meter \n");
  scanf("%d",&num);
  
  switch (num) {
    case 1:
      printf("Enter fernheit \n");
      scanf("%f", &f);
      
      c = (f - 32) *5/9;
      printf("%f",c);
      break;
    case 2:
      printf("Enter feet \n");
      scanf("%f", &ft);
      
      m = ft/3.2808399;
      printf("%f", m);
      break;
  }
    
  return 0;
}
