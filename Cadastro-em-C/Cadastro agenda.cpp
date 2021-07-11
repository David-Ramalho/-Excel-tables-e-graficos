#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define t 2
typedef struct dados{
	char nome[30];
	int tel;
	char email[30];
	
} cadastro;
int main(){
	int i, j, k;
	cadastro agenda[i];
	
	printf("Quantas pessoas queres cadastrar?\n");
	scanf("%d", &j);
	
	for(i=0;i<j;i++){
		printf("Qual o nome do %d?\n", i+1);
		scanf("%s", agenda[i].nome);
		fflush(stdin);
		
		printf("Qual o telefone do %d\n",i+1);
		scanf("%d", &agenda[i].tel);
		fflush(stdin);
		
		printf("Qual o email do %d\n", i+1);
		scanf("%s", agenda[i].email);
		fflush(stdin);
		

	}
	
	printf("Queres visualizar os dados cadastrados? 1-s 0- nao \n");
	scanf("%d", &k);
	
	
	
	switch (k){
		case 1:
		for(i=0;i<j;i++){
			printf("O cadastro de %s, telefone %d e email %s\n", agenda[1].nome, agenda[i].tel, agenda[1].email);
			
		} break;
		
		case 0: printf("programa encerrado! Bom dia!");
		break;
		
		default: printf("comando inválido");
		
	}
	
	
	
	return(0);
}