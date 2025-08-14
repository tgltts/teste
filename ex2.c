#include <stdio.h>

int main()
{

  float a;
  float area;
  float perimetro;

  printf("Digite o valor do raio :");
  scanf("%f", &a);

  area =  3.1415926 * (a*a);
  perimetro = 2 *  3.1415926 * a; 

  printf("O valor da área = %f e do perímetro = %f", area , perimetro);

  return 0;
}
