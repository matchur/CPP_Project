#include<stdio.h>
#include "controle.h"

int main(int argc, char** argv)
{
	char str[50];
	controle ctrl;
	
	
	printf("Começar o controle? <Sim/Nao> ");
	gets(str);
	if(strcmp(strupr(str),"SIM"));
	{
		printf("Informe um nome para o produto: ");
		fflush(stdin);
		gets(str);
		strcpy(ctrl.nome,str);
		printf("Informe o preco do item(%s): ",ctrl.nome);
	   	fflush(stdin);
		scanf("%f",ctrl.preco);
		printf("Quantidade no estoque: ");
		scanf("%d",ctrl.estoque);		
	}
	printf("%s",str);
	return 0;
}