#include <stdio.h>
#include <locale.h>
/*Fa�a um programa que exibe, em ordem decrescente, os 500 primeiros n�meros
inteiros positivos. */

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n = 500;
	
	while(n >= 0)
	{
		printf("%d ",n);
		n--;
	}
	return 0;
}