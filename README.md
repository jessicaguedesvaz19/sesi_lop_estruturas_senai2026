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

´´´
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
´´´

02 - Ao exibir as informações do produto, calcule e exiba o valor total em estoque (preço * quantidade).

03 - Crie um vetor de estruturas para armazenar informações de múltiplos produtos e exiba as informações de cada produto, incluindo o valor total em estoque e o total geral.

04 - Modifique o programa para permitir que o usuário insira as informações dos produtos em vez de atribuí-las diretamente no código.
