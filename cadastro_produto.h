#include <stdio.h>
#include <stdlib.h>

struct produto{
    char nome_produto;
    int id_produto;
    float quantidade_produto;
};
// teste cadastra produto
// OBS: tentar tornar dinamico depois
produto cadastra_produto(char nome_produto, int id_produto, float quantidade_produto ){
    produto P;

    P.nome_produto = nome_produto;
    P.id_produto = id_produto;
    P.quantidade_produto = quantidade_produto;
    return (P);
}
