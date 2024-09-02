#include <stdio.h>
#include <locale.h>
/*Escreva um programa que exibe o somatório dos valores pares existentes na faixa
de 1 (inclusive) até 500 (inclusive).*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n = 2,s = 0;
	
	while(n <= 500)
	{
		s = s + n;
		n = n + 2;
	}
	printf("O resultado foi: %d",s);
	return 0;
}