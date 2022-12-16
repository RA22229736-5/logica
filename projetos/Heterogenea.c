#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente {
	char nome[10] [100];
	int idade[10];
	char sexo[10][100];
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct cliente dadosCliente;

int i = 0;
int main(int argc, char *argv[]) {
 

do{
printf( "Insira seu nome : ");

scanf("%s",dadosCliente.nome[i]);

printf( "\nAgora a sua idade : ");
scanf("%d",&dadosCliente.idade[i]);

printf( "\nSexo [M] ou [F]: ");

scanf("%s",dadosCliente.sexo[i]);
i++;

system("clear");

}while (i<3);

for(i=0; i<3; i++){
	
	printf( "\nNome do %d cliente : %s", (i+1), dadosCliente.nome[i]);
	printf( "\nIdade do %d cliente : %d", (i+1), dadosCliente.idade[i]);
	printf( "\nSexo do %d cliente : %s", (i+1), dadosCliente.sexo[i]);
	printf( "\n");		
}

	
	return 0;
}
