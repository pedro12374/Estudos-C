#include <stdio.h>

int main() {
  float sal,novo_sal;
  printf("Entre com o salario do funcionario\n");
  scanf("%f", &sal);
  novo_sal=sal+(sal*0.25);
  printf("O novo salrio eh: %.2f\n",novo_sal );
  return 0;
}
