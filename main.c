#include <stdio.h>

int main() {
  double w,h ;
  scanf("%lf %lf", &w, &h); 
   double h_m = h / 100.0;
   double bmi = w / (h_m * h_m);

  if (bmi < 18.5 ) { 
    prinft("UNDERWEIGHT\n");
  }else if (bmi < 25.0 ) {
    prinft("NORMAL\n");
  }else
  
    
  }
  return 0;
}