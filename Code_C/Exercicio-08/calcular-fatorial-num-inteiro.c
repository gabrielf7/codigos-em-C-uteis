#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int num, x = 2, fat = 1;
	
	printf("==============================================================\n");
	printf("          Encontre o resultado de um num fatorial \n");
	printf("==============================================================\n");
	printf("Digite o valor do numero: ");
	scanf("%d", &num);
	while (x <= num){
	  fat = fat * x;
	  x = x +1;
  }
	printf("O resultado do valor de [%d!] eh: %d\n", num, fat);
	printf("==============================================================\n");
	pausar();
	return(0);
}
