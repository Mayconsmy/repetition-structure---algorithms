#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int fat,i,n;
	
	for(n = 1; n <= 11; n += 2){
	i = n;
	fat = 1;	
		while(i >= 1)
		{
			fat = fat * i;
			i -= 1;
		}		
	printf("%d! = %d \n", n, fat);	
	}
	
	return 0;
}
