#include <stdio.h>
int main(){
  float pi = 3.14159;
  double V,R;
  scanf("%lf",&R );
  V=(4.0/3)*pi*R*R*R;
  printf("VOLUME = %.3f\n",V );

  return 0;
}
