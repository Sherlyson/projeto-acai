#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include <conio.h>

typedef struct{
	char nome[30];
	int qtd;
	float preco, venda;
} produto;

int x = 0;

void cadastrar_produto(produto *prod; int *endereco){
	do{
		prod = (produto*)realloc(prod,((*endereco)+1)*sizeof(produto));
		if(prod==NULL){
			printf ("Memoria Insuficiente");
			return;
		}
		printf("Informe o nome do produto: ");
		scanf("%s", &prod[*endereco].nome);
		printf("Infome o valor do produto: ");
		scanf("%f", &prod[*endereco].preco);
			if(prod[*endereco].preco<0){
				printf("Valor menor que 0! Redefina o valor: ");
				scanf("%f", &prod[*endereco].preco);
			}
		printf("Informe a quantidade do produto: ");
		scanf("%d", &prod[*endereco].qtd);
			if(prod[*endereco].qtd<0){
				printf("Quantidade menor que 0! Redefina a quantidade: ");
				scanf("%d", &prod[*endereco].qtd);
			}
		prod[*endereco].venda = 0;
		x = 1; // adicionar se diferente de 0, ao consultar o estoque, é igual a estoque vazio!!!
		(*endereco)++;
	}while(opcao==1);
}

void exibir_estoque(produto *prod; int *endereco){
	if(x!=1){
		printf("ESTOQUE VAZIO!");
		system("PAUSE");
		system("cls");
	}else{
		for(int i=0; i<endereco; i++){
			printf ("||Codigo: %d\t||Nome: %s\t||Preco: R$ %.2f\t||Quantidade: %d\n", i, prod[i].nome, prod[i].preco, prod[i].qtd);
		}
	}
}

void alterar_quantidade(produto *prod; int qtd, id;){
	printf("Digite o id do produto a ter a quantidade alterada: ");
	scanf("%d", &id);
	printf("Digite a quantidade do produto a ser alterada: ");
	scanf("%d", &qtd);
	prod[id].qtd = prod[id].qtd + qtd;
}
