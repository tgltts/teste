#include <stdio.h>

int main()
{

  float raio;
  float area;
  float perimetro;
  const float PI = 3.1415926;

  printf("Digite o valor do raio :");
  scanf("%f", &raio);

  area =  PI * (raio*raio);
  perimetro = 2 *  PI * raio; 

  printf("O valor da área = %f e do perímetro = %f \n", area , perimetro);

  return 0;
}
