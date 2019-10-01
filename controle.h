struct controle
{
	int estoque;//controle do armazem
	char nome[50];//controle do nome do produto
	float preco;//preco do item
		
};typedef struct controle controle;


void setEstoque(int estoque,controle class)
{
	class.estoque = estoque;
}