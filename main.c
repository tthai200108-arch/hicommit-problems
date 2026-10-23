#include <stdio.h>

int main() {
  double w,h ;
  scanf("%lf %lf", &w, &h); 
   double h_m = h / 100.0;
   double bmi = w / (h_m * h_m);

  if (bmi < 18.5 ) { 
    printf("UNDERWEIGHT\n");
  }else 
    if ( bmi < 25.0 ) {
    printf("NORMAL\n");
  }else
      if ( 25.0 <= bmi < 30 ) {
     printf("OVERWEIGHT\n");
  } else 
      {
     printf("OBESE\n");
  }
  return 0;
}