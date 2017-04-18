#include<stdio.h>
#include<stdlib.h>
/*Escreva um programa que dada a idade de uma pessoa, determine sua classificacao
{ maior de idade;
{ menor de idade;
{ pessoa idosa (idade superior ou igual a 65 anos).*/

main(){
	int idade;
	printf("Informe a idade:");
	scanf("%d",&idade);
	
	if(idade>=18&&idade<65){
	printf("maior de idade\n");
}
else if(idade<18){
		printf("menor de idade\n");

}else if(idade>=65){
	printf("pessoa idosa\n");
}
}
