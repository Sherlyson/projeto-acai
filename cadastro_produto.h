#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome_produto;
    int id_produto;
    float quantidade_produto;
}produto;
// teste cadastra produto
// OBS: tentar tornar dinamico depois
// Dar um jeito de o id ser sempre o anterior mais 1
produto cadastra_produto(char nome_produto, int id_produto, float quantidade_produto ){
    produto *P,*M;
    P = (produto *)malloc(sizeof(produto));
    M = (produto *)malloc(3 * id_produto * sizeof(produto));
    P->nome_produto = nome_produto;
    P->id_produto = id_produto;
    P->quantidade_produto = quantidade_produto;
    for (int i = 0; i < id_produto; ++i) {
        M[3][id_produto] = P;
    }
    return (M);
}

void imprime_produtos(int id_produto){
    printf("Id do produto %d\n Nome: %c\n Quantidade: %f", )
}