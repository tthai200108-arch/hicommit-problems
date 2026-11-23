#include <stdio.h>

int main() {
  double d, tien;
  scanf("%lf", &d);

  if (d <= 1) {
    tien = d * 15000.0;
  } else if (d <= 5){
    tien = 15000.0 + (d - 1) * 13000.0;
  } else {
    tien = 15000.0 + 4 * 13000.0 + (d - 5) * 11000.0;
  }
  prinf("%d\n", (int)tien);
  return 0;
}