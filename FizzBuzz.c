// Given an integer n, for every integer i <= n, the task is to print “FizzBuzz” if i is divisible by 3 and 5, 
// “Fizz” if i is divisible by 3, “Buzz” if i is divisible by 5 or i (as a string) if none of the conditions are true.

#include <stdio.h>

int main() {
    
    int i, n;
    
    printf("Enter a number: \n");
    scanf("%d", &n);
  
    printf("\n");
  
  for(i=0; i<=n; i++) {
  
      if(i%3==0) {
          printf("fizz");
      }
        
      else if (i%5==0) {   
          printf("buzz");
      }   
        
      else
          printf("%d", i);
          printf(" ");
   }
  
    return 0;
}
