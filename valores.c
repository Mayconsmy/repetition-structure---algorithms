#include <stdio.h>
#include <locale.h>
/*Faça um programa que exibe, em ordem decrescente, os 500 primeiros números
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