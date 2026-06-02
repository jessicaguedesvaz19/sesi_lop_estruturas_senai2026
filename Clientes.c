#include <stdio.h>
#include <windows.h>

struct Cliente {
	char nome[50];
	int idade;
	char email[100];
	
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Cliente clientes[5];
	
	strcpy(clientes[0].nome, "Leandro Silveira");
	clientes[0].idade = 23;
	strcpy(clientes[0].email, "leandrosilveira@email.com");
	
	strcpy(clientes[1].nome, "Samira Oliveira");
	clientes[1].idade = 37;
	strcpy(clientes[1].email, "samiraoliveira@email.com");
	
	strcpy(clientes[2].nome, "Giovana Lima");
	clientes[2].idade = 46;
	strcpy(clientes[2].email, "giovanalima@email.com");
	
	strcpy(clientes[3].nome, "Larissa Guedes");
	clientes[3].idade = 43;
	strcpy(clientes[3].email, "larissaguedes@email.com");
	
	strcpy(clientes[4].nome, "Matheus Silva");
	clientes[4].idade = 32;
	strcpy(clientes[4].email, "matheussilva@email.com");
	
	for(int i = 0; i < 5; i++){
		printf("%s\tidade: %d\t%s\n",clientes[i].nome, clientes[i].idade, clientes[i].email);
	}
	
	getch();
	
}
	