#include <stdio.h>
#include <math.h>

int main(){
  float x1,y1,x2,y2,dis;
  printf("Entre com os valores de x1 e y1\n");
  scanf("%f %f",&x1,&y1);
  printf("Os pontos entrados foram %.2f e %.2f\n",x1,y1 );
  printf("Entre com os valores de x2 e y2\n");
  scanf("%f %f",&x2,&y2);
  dis=sqrt(pow((x2-x1),2) + pow((y2-y1),2));
  printf("A distancia entre (%.2f,%.2f) e (%.2f,%.2f) eh: %.2f\n",x1,y1,x2,y2,dis);



}
