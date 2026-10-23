#include <stdio.h>

int main() {
  double dtb ;
  scanf("%lf", &dtb);
  if (dtb >= 9.0) {
        printf("A\n");
  } else if (dtb >= 8.0) {
        printf("B+\n");
  } else if (dtb >= 7.0) {
        printf("B\n");
  } else if (dtb >= 6.5){
        printf("C+\n");
    
  }
            
  return 0;
}