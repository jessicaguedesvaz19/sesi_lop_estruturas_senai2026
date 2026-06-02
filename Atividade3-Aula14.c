#include <stdio.h>
#include <windows.h>

struct Produto {
	char nome[50];
	float preco;
	int quantidade;
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	float estoque1, estoque2, estoque3, totalgeral;
	struct Produto produtos[3];
	
	strcpy(produtos[0].nome, "Detergente");
	produtos[0].preco = 2,40;
	produtos[0].quantidade = 2;
	
	estoque1 = produtos[0].preco * produtos[0].quantidade;
	
	strcpy(produtos[1].nome, "Sabão em Pó");
	produtos[1].preco = 18,50;
	produtos[1].quantidade = 3;
	
	estoque2 = produtos[1].preco * produtos[1].quantidade;
	
	strcpy(produtos[2].nome, "Amaciante");
	produtos[2].preco = 16,00;
	produtos[2].quantidade = 1;
	
	estoque3 = produtos[2].preco * produtos[2].quantidade;
		
	for(int i = 0; i < 3; i++){
		printf("%s\tpreço: %.2f\tquantidade: %d\n",produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
	}
	
	printf("\nEstoque do produto 1 = %.2f\n", estoque1);
	printf("Estoque do produto 2 = %.2f\n", estoque2);
	printf("Estoque do produto 3 = %.2f\n", estoque3);
	
	totalgeral = estoque1 + estoque2 + estoque3;
	
	printf("\nTotal Geral: %.2f", totalgeral);
	
}