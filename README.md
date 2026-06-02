#  Exercícios com estruturas (Linguagem C)

* LOP - Aula 14

# Estruturas

Estruturas são tipos de dados compostos que permitem agrupar diferentes tipos de dados sob um mesmo nome. Em C, as estruturas são definidas usando a palavra-chave struct. Elas são úteis para organizar e representar dados complexos de forma mais clara e eficiente.

# Tecnologias 

* Linguagem C
* DevC++

# Como testar 

* Clone o repositório
* Abra o arquivo .c com o DevC++
* Precione F11 para compilar e executar

# Atividades

01 - Crie um programa que utilize uma estrutura para armazenar informações de um produto (nome, preço, quantidade) e exiba essas informações.

``` c
#include <stdio.h>
#include <windows.h>
struct Produto {
	char nome[50];
	float preco;
	int quantidade;
};
void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto produtos;
	strcpy(produtos.nome, "Detergente");
	produtos.preco = 2,40;
	produtos.quantidade = 50;
	printf("Produto: %s\tPreço: %.2f\tQuantidade: %d\n",produtos.nome, produtos.preco, produtos.quantidade);
	getch();
}
```


02 - Ao exibir as informações do produto, calcule e exiba o valor total em estoque (preço * quantidade).

```c
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
```

03 - Crie um vetor de estruturas para armazenar informações de múltiplos produtos e exiba as informações de cada produto, incluindo o valor total em estoque e o total geral.

```c
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
```

04 - Modifique o programa para permitir que o usuário insira as informações dos produtos em vez de atribuí-las diretamente no código.

```c
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
```
