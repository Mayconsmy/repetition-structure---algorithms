#include <stdio.h>
#include <locale.h>
/*Escreva um programa que exibe os n�meros divis�veis por 2 existentes no intervalo
de 10 (inclusive) a 50 (inclusive). Ao final, o programa deve informar o total de
n�meros que foram exibidos.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n,t = 0;
	
	for(n = 10; n <= 50; n += 2){
	printf("%d ",n);
	t = t + 1;
	}
	printf("\nTotal de n�meros: %d",t);
	return 0;
}