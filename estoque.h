#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
	char nome[30];
	int qtd;
	float preco, venda;
} produto;

int x = 0;

void cadastrar_produto (produto *prod, int *id){
	do{
		prod = (produto*)realloc(prod,((*id)+1)*sizeof(produto));
		if(prod==NULL){
			printf ("Memoria Insuficiente");
			return;
		}
		printf("Informe o nome do produto: ");
		scanf("%s", &prod[*id].nome);
		printf("Infome o valor do produto: ");
		scanf("%f", &prod[*id].preco);
			if(prod[*id].preco<0){
				printf("Valor menor que 0! Redefina o valor: ");
				scanf("%f", &prod[*id].preco);
			}
		printf("Informe a quantidade do produto: ");
		scanf("%d", &prod[*id].qtd);
			if(prod[*id].qtd<0){
				printf("Quantidade menor que 0! Redefina a quantidade: ");
				scanf("%d", &prod[*id].qtd);
			}
		prod[*id].venda = 0;
		x = 1; // adicionar se diferente de 0, ao consultar o estoque, é igual a estoque vazio!!!
		(*id)++;
	}while(opcao==1);
}
