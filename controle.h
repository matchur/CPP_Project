#include<string.h>

struct controle
{
	int estoque;//controle do armazem
	char nome[50];//controle do nome do produto
	float preco;//preco do item
	int quantidade;
		
};typedef struct controle controle;


void setEstoque(int estoque,controle classe)
{
	classe.estoque = estoque;
}

void setNome(char *nome,controle classe)
{
    strcpy(classe.nome,nome);	
}

void setPreco(float preco,controle classe)
{
	classe.preco = preco;
}

float getTotal(controle classe)
{
	return classe.quantidade*classe.preco;
}



