#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

typedef struct{
	char nome[30];
	int qtd;
	float preco, venda;
} produto;

int main(){
	int *endereco;
	int opcao;
	produto *prod;
	prod = (produto*)malloc(sizeof(produto));
    
    do{
	    printf("\n~~~~GERENCIADOR DE ACAI~~~~BEM VINDO!~~~~\n");
	    printf("\nO que voce quer fazer?\n");
	    printf("\n 1- Adicionar produtos\n 2- Vender produtos\n 3- Ver o estoque\n 4- Ver vendas\n 5- Sair\n");
	    printf("\n~~~~GERENCIADOR DE SUPERMERCADO~~~~BEM VINDO!~~~~\n");
	    printf("\nEscolha o numero da opcao: ");
	    scanf("%d", &opcao);
	    switch(opcao){
			case (1):
	        	estoque(prod, &endereco);
			break;
            case(2):
        	    gerenciamento(prod);
            break;
            case(3):
        	    estoque(prod);
		    break;
            case(4):
			    vendas(prod);
		    break;
            case(5):
        	    printf("\n\nObrigado por usar o programa!\n\n");
                exit(0);
            break;
            default:
		        printf("Comando invalido\n");
		        system("PAUSE");
		        system("cls");
         }
	}while(1);
    
    return 0;
}
