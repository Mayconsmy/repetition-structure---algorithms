#include <stdio.h>
#include <locale.h>

/*Faça um programa para calcular e exibir a média aritmética e o conceito de 10
alunos.*/
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	float a1,a2,a3,me;
	 
	 for(n = 1; n <= 10; n++){
	 	 
	 	 printf("**************************************\n");
	 	 printf("***********%dº verificação************\n",n);
		 printf("**************************************");
	 	 printf("\nInforme a nota da primeira avaliação: ");
	 	 scanf("%f",&a1);
		 printf("\nInforme a nota da segunda avaliação: ");
	 	 scanf("%f",&a2);
		 printf("\nInforme a nota da terceira avaliação: ");
 	     scanf("%f",&a3);
		 printf("\n**************************************\n");
		 
		 me = ((a1 + a2 + a3)/3);
		 
 	     if(me >= 9){
			  printf("Aluno com conceito A\n");
			  printf("Média: %.2f\n",me);
		  }
		 else if(me >= 7){
			 printf("Aluno com conceito B\n");
			 printf("Média: %.2f\n",me);
		 }
		 else if(me >= 6){
			 printf("Aluno com conceito C\n");
			 printf("Média: %.2f\n",me);
		 }  
		 else if(me >= 4){
			 printf("Aluno com conceito D\n");
			 printf("Média: %.2f\n",me);
		 }
		 else{
			 printf("Aluno com conceito E\n");
			 printf("Média: %.2f\n",me);
		 }
	   }
	 
	return 0;
}