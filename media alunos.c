#include <stdio.h>
#include <locale.h>

/*Fa�a um programa para calcular e exibir a m�dia aritm�tica e o conceito de 10
alunos.*/
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	float a1,a2,a3,me;
	 
	 for(n = 1; n <= 10; n++){
	 	 
	 	 printf("**************************************\n");
	 	 printf("***********%d� verifica��o************\n",n);
		 printf("**************************************");
	 	 printf("\nInforme a nota da primeira avalia��o: ");
	 	 scanf("%f",&a1);
		 printf("\nInforme a nota da segunda avalia��o: ");
	 	 scanf("%f",&a2);
		 printf("\nInforme a nota da terceira avalia��o: ");
 	     scanf("%f",&a3);
		 printf("\n**************************************\n");
		 
		 me = ((a1 + a2 + a3)/3);
		 
 	     if(me >= 9){
			  printf("Aluno com conceito A\n");
			  printf("M�dia: %.2f\n",me);
		  }
		 else if(me >= 7){
			 printf("Aluno com conceito B\n");
			 printf("M�dia: %.2f\n",me);
		 }
		 else if(me >= 6){
			 printf("Aluno com conceito C\n");
			 printf("M�dia: %.2f\n",me);
		 }  
		 else if(me >= 4){
			 printf("Aluno com conceito D\n");
			 printf("M�dia: %.2f\n",me);
		 }
		 else{
			 printf("Aluno com conceito E\n");
			 printf("M�dia: %.2f\n",me);
		 }
	   }
	 
	return 0;
}