#include <stdio.h>
int main() {
  float r;
  double a,pi = 3.141592;
  printf("Entre com um numero\n");
  scanf("%f",&r );
  a=r*r*pi;
  printf("A area do circulo de raio %f eh %f\n",r,a );
  return 0;
}
