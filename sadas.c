#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear_numero(){
  return 1 + rand() %100;
}

int ler_palpites(){
  int palpite;
  do {
      printf("Digite o seu palpite: ");
      scanf("%d", &palpite);

      if (palpite < 1 || palpite > 100){
          printf("❌ Valor inválido! Tente novamente.\n");
      }
  }while(palpite < 1 || palpite > 100);

  return palpite;
}

void verificar_palpite(int palpite, int numero){
    if (palpite == numero){
        printf("Parabéns!!! Você acertou!\n");
    } 
    else if (palpite < numero){
        printf("Você chutou muito baixo! O valor correto é %d.\n", numero);
    } 
    else {
        printf("Você chutou muito alto! O valor correto é %d.\n", numero);
    }
}

int main(){
  srand(time(NULL));
  int numero = sortear_numero();
  int palpite = ler_palpites();

  verificar_palpite( palpite,  numero);

  return 0;
}


    
