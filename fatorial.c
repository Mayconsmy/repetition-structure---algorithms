#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n,fat = 1,i;
	
	printf("Informe o valor que deseja calcular: \n");
	scanf("%d",&n);
	
	if(n < 0){
		printf("N�o existe fatorial de n�mero negativo e n�mero neutro.");
		
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