#include <stdio.h>
#include <locale.h>
/*Escreva um programa que solicita e l� a idade do usu�rio, e exibe uma mensagem
informando se ele � maior ou menor de idade. Esses procedimentos devem ser
repetidos 10 vezes.*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n,idade;
	
	for(n = 1; n <= 10; n++){
		printf("Infome sua idade: \n");
		scanf("%d",&idade);
		if(idade > 0){
			printf("\nIdade v�lida\n");
		}
		else
		{
			printf("\nIdade Inv�lida\n");
		}
	}
	
	
	return 0;
}