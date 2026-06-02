#include <stdio.h>
#include <windows.h>

struct Produto {
	char nome[50];
	float preco;
	int quantidade;
	
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	float estoque;
	struct Produto produtos;
	
	strcpy(produtos.nome, "Detergente");
	produtos.preco = 2,40;
	produtos.quantidade = 50;
	
	estoque = produtos.preco * produtos.quantidade;
		
	printf("Produto: %s\tPreço: %.2f\tQuantidade: %d\n",produtos.nome, produtos.preco, produtos.quantidade);	
	printf("\nEstoque do produto 1 = R$ %.2f\n", estoque);

	getch();
	
}