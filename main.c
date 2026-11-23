#include <stdio.h>

int main() {
  double d, tien;
  scanf("%lf", &d);

  if (d <= 1) {
    tien = d * 15000;
  } else if (d <= 5){
    tien = 1 * 15000 + (d - 1) * 13000;
  }
  return 0;
}