#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n,fat = 1,i;
	
	printf("Informe o valor que deseja calcular: \n");
	scanf("%d",&n);
	
	if(n < 1){
		printf("Não existe fatorial de número negativo e número neutro.");
	
	}
	else{
	for(i = 1; i <= n; i++){
		fat = fat * i;
	}
	printf("%d! = %d", n, fat);	
		
	}
	
	return 0;
}