#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n,fat = 1,i;
	
	printf("Informe o valor que deseja calcular: \n");
	scanf("%d",&n);
	
	if(n < 0){
		printf("Não existe fatorial de número negativo e número neutro.");
		
		for(i = 1; i <= n; i++){
		fat = fat * i;
	}
	printf("fatorial de %d! = %d", n, fat);	
	}
	else
	{
	for(i = 1; i <= n; i++){
		fat = fat * i;
	}
	printf("%d! = %d", n, fat);	
		
	}
	
	return 0;
}