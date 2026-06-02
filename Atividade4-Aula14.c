#include <stdio.h>
#include <windows.h>

struct Produto {
	char nome[50];
	float preco;
	int quantidade;
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	
	printf("Quantos produtos você quer cadastrar? ");
	scanf("%d", &n);
	
	struct Produto pro[n];
		
	for(int i = 0; i<n; i++){
		printf("Informe o produto: ");
		scanf(" %s", &pro[i].nome);
		printf("Informe seu preço: ");
		scanf("%f", &pro[i].preco);
		printf("Informe sua quantidade: ");
		scanf("%d", &pro[i].quantidade);
	}
	
	float estoque, totalgeral;
	
	for(int i = 0; i<n; i++){
		printf("%s\tpreço: %.2f\tquantidade: %d\n",pro[i].nome, pro[i].preco, pro[i].quantidade);
		estoque = pro[i].preco * pro[i].quantidade;
		printf("Estoque: %.2f", estoque);
	}

}