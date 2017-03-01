#include <stdio.h>

int main() {
  int n1,c1,c2,n2;
  float Tot,v1,v2;
  scanf("%d %d %f",&c1,&n1,&v1);
  scanf("%d %d %f",&c2,&n2,&v2);
  Tot = n1*v1+n2*v2;
  printf("VALOR A PAGAR: R$%.2f\n",Tot);
  return 0;
}
