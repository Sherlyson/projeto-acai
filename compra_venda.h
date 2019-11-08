#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

void compra(int id_compra, int qtd){
    produto *prod;
    printf("Digite o código id do produto comprado\n");
    scanf("%d",&id_compra);
    printf("Digite a quantidade do produto");
    prod[id_compra].qtd = prod[id_compra].qtd + qtd;
    //adicionar funçao que localiza o produto pelo id que foi armazenado no estoque e adiciona;
}

void venda(int id_produto) {
    produto *prod;
    printf("Digite o código id do produto que será vendido\n");
    scanf("%d",&id_compra);
    printf("Digite a quantidade do produto");
    prod[id_compra].qtd = prod[id_compra].qtd - qtd;
}