#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int fat,i,n;
	
	for(n = 1; n <= 11; n += 2){

		for(i = n; i >= 1; i = i - 1){
			fat = fat * i;
				
		}		
	printf("%d! = %d \n", n, fat);	
	}
	
	return 0;
}