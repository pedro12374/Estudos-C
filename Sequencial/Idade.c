#include <stdio.h>

int main(){
  int idd,mes,anos,dias;
  printf("Entre com a sua idade em dias kiridu\n");
  scanf("%d", &idd);
  anos = idd/365;
  mes=(idd - 365*anos) / 30;
  dias= ((idd - 365*anos) - 30*mes);
  printf("Você tem %d anos %d meses e %d dias de uma fodendo vida.\n",anos,mes,dias);

}
