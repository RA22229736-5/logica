// Inclusão de bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
//#include <conio.h>

// Definição das constantes
#define LIMITE 10

// Declaração e atribuição das variáveis globais
int i = 0;
bool achou = false;
int urna;
int votoNuloGov, votoBrancoGov, votoNuloPrt, votoBrancoPrt, count;

// Construção de estrutura candidadto
struct candidato
{
    int numCandidato;
    char nome[100];
    char partido[15];
    int votos;
};
// Construção da estrutura eleitor
struct eleitor
{
    int titulo;
    char nome[100];
    bool jaVotou;
};
// Definindo as estruturas para aplicação do sistema
struct candidato Presidente[10];
struct candidato Governador[10];
struct eleitor Eleitor[500];

// Atribuição de dados para as variáveis
int docEleitor[500] = {13, 22, 71, 27};
char nomeEleitor[500][100] = {"Joãozinho", "Mariazinha", "Pedrinho", "Joaquina"};

int numPartido[LIMITE] = {10, 15, 20, 25};

char nomepresidente[LIMITE][100] = {"Didi", "Charlie", "Caco Antibes", "Chaves"};

char nomegovernador[LIMITE][20] = {"Zé da Farmacia", "João Borracheiro", "Kiko", "Madruga"};

char legendaPartido[LIMITE][15] = {"PTB", "PSDB", "Radical", "Podemos"};

// Procedimento para dar pause no nosso programa
void pause()
{

    fflush(stdin);
    printf("\nPressione enter para continuar...");
    getchar();
    getchar();
};
// Procedimento para a passagem de dados das variáveis globais para as variáveis das estruturas criadas
void atribuicao(int num)
{
    // i = 0;
    for (i = 0; i < LIMITE; i++)
    {
        // Passagem de strings com a função strcpy
        strcpy(Presidente[i].nome, nomepresidente[i]);
        strcpy(Governador[i].nome, nomegovernador[i]);
        strcpy(Presidente[i].partido, legendaPartido[i]);
        strcpy(Governador[i].partido, legendaPartido[i]);
        strcpy(Eleitor[i].nome, nomeEleitor[i]);

        // Passagem dos numeros
        Eleitor[i].titulo = docEleitor[i];
        Presidente[i].numCandidato = numPartido[i];
        Governador[i].numCandidato = numPartido[i];
    }
};
// Procedimento para votar Presidente
void votarPresidente()
{

    char confirmar;
    char votoEleitorChar;
    char votoEleitorStr[3];

    int votoEleitorInt, comparaStr1, comparaStr2;
    achou = false;

    printf("Eleições 2022 - AMPLIAR");
    printf("\n Presidente\n  ");
    scanf("%s", votoEleitorStr);

    votoEleitorInt = atoi(votoEleitorStr);

    comparaStr1 = strcmp(votoEleitorStr, "b");
    comparaStr2 = strcmp(votoEleitorStr, "B");

    fflush(stdin);

    if (comparaStr1 == 0 || comparaStr2 == 0)
    {
        printf("\nVoto em Branco");
        printf("\nConfirmar Sim [S] ou Não [N]: ");
        scanf("%s", &confirmar);

        switch (confirmar)
        {

        case 's':

            votoBrancoPrt++;

            break;

        case 'S':

            votoBrancoPrt++;

            break;

        case 'n':
            system("clear");
            votarPresidente();
            break;

        case 'N':
            system("clear");
            votarPresidente();
            break;

        default:

            printf("Opção inválida");
            pause();
            system("clear");
            votarPresidente();
            break;
        }
    }
    else
    {

        if (comparaStr1 == 1 || comparaStr2 == 0)
        {

            printf("Dado de entrada inválido\n\n");
            printf("Insira o numero do candidato ou para votar em branco digite b ou B\n\n");
            pause();
            system("clear");
            votarPresidente();
        }
        else
        {

            for (i = 0; i <= LIMITE; i++)
            {

                if (Presidente[i].numCandidato == votoEleitorInt && (achou != true))
                {
                    achou = true;
                    printf("%s", Presidente[i].nome);
                    printf(" - %s", Presidente[i].partido);
                    printf("\nConfirmar Sim [S] ou Não [N]: ");
                    scanf("%s", &confirmar);

                    switch (confirmar)
                    {

                    case 's':

                        Presidente[i].votos++;

                        break;

                    case 'S':

                        Presidente[i].votos++;

                        break;

                    case 'n':
                        system("clear");
                        votarPresidente();
                        break;

                    case 'N':
                        system("clear");
                        votarPresidente();
                        break;

                    default:
                        printf("Opção inválida");
                        votarPresidente();
                        break;
                    }
                }
            }
            if (achou == false)
            {

                printf("Voto Nulo");
                printf("\nConfirmar Sim [S] ou Não [N]: ");
                scanf("%s", &confirmar);

                switch (confirmar)
                {

                case 's':

                    votoNuloPrt++;

                    break;

                case 'S':

                    votoNuloPrt++;

                    break;

                case 'n':
                    system("clear");
                    votarPresidente();
                    break;

                case 'N':
                    system("clear");
                    votarPresidente();
                    break;

                default:
                    printf("Opção inválida");
                    pause();
                    votarPresidente();
                    break;
                }
            }
        }
    }
    system("clear");
};
// Procedimento para votar Governador
void votarGovernador()
{
    char confirmar;
    char votoEleitorChar;
    char votoEleitorStr[3];

    int votoEleitorInt, comparaStr1, comparaStr2;
    achou = false;

    printf("Eleições 2022 - AMPLIAR");
    printf("\n Governador\n  ");
    scanf("%c", votoEleitorStr);

    votoEleitorInt = atoi(votoEleitorStr);

    comparaStr1 = strcmp(votoEleitorStr, "b");
    comparaStr2 = strcmp(votoEleitorStr, "B");

    fflush(stdin);

    if (comparaStr1 == 0 || comparaStr2 == 0)
    {
        printf("\nVoto em Branco");
        printf("\nConfirmar Sim [S] ou Não [N]: ");
        scanf("%s", &confirmar);

        switch (confirmar)
        {

        case 's':

            votoBrancoGov++;
            system("clear");
            break;

        case 'S':

            votoBrancoGov++;
            system("clear");

            break;

        case 'n':
            system("clear");
            votarGovernador();
            break;

        case 'N':
            system("clear");
            votarGovernador();
            break;

        default:

            printf("Opção inválida");
            pause();
            system("clear");
            votarGovernador();
            break;
        }
    }
    else
    {

        if (comparaStr1 == 1 || comparaStr2 == 0)
        {

            printf("Dado de entrada inválido\n\n");
            printf("Insira o numero do candidato ou para votar em branco digite b ou B\n\n");
            pause();
            system("clear");
            votarGovernador();
        }
        else
        {

            for (i = 0; i <= LIMITE; i++)
            {

                if (Governador[i].numCandidato == votoEleitorInt && (achou != true))
                {
                    achou = true;
                    printf("%s", Governador[i].nome);
                    printf(" - %s", Governador[i].partido);
                    printf("\nConfirmar Sim [S] ou Não [N]: ");
                    scanf("%s", &confirmar);

                    switch (confirmar)
                    {

                    case 's':

                        Governador[i].votos++;

                        break;

                    case 'S':

                        Governador[i].votos++;

                        break;

                    case 'n':
                        system("clear");
                        votarGovernador();
                        break;

                    case 'N':
                        system("clear");
                        votarGovernador();
                        break;

                    default:
                        printf("Opção inválida");
                        votarGovernador();
                        break;
                    }
                }
            }
            if (achou == false)
            {

                printf("Voto Nulo");
                printf("\nConfirmar Sim [S] ou Não [N]: ");
                scanf("%s", &confirmar);

                switch (confirmar)
                {

                case 's':

                    votoNuloGov++;
                    system("clear");
                    break;

                case 'S':

                    votoNuloGov++;
                    system("clear");
                    break;

                case 'n':
                    system("clear");
                    votarGovernador();
                    break;

                case 'N':
                    system("clear");
                    votarGovernador();
                    break;

                default:
                    printf("Opção inválida");
                    pause();
                    votarGovernador();
                    break;
                }
            }
        }
    }
    system("clear");
};
// Procedimento para verificar se o eleitor faz parte da seção
void verificaEleitor()
{
    system("clear");
    achou = false;
    int verificaDoc;
    printf(" Insira o numero do titulo do eleitor: ");
    scanf("%i", &verificaDoc);

    for (i = 0; (i < LIMITE) && (achou != true); i++)
    {

        if (Eleitor[i].titulo == verificaDoc)
        {
            achou = true;
        }
    }

    if (achou == false)
    {

        printf("\nEleitor não faz parte desta seção\n");
        printf("\nTente novamente ou encaminhe para a mesa de justificação de votos\n");

        pause();
        system("clear");
    }
    else
    {

        if (Eleitor[i].jaVotou == false)
        {

            printf("\nO(A) Eleitor(a) %s faz parte desta seção\n", Eleitor[i].nome);
            printf("\n\tUrna liberada\n");
            Eleitor[i].jaVotou = true;
            pause();
            system("clear");
        }
        else
        {

            printf("\nO(A) Eleitor(a) %s ja votou\n", Eleitor[i].nome);
            pause();
            system("clear");
            achou = false;
        }
    }
}

// Procedimento para imprimir zerésima
void zeresima();

int votacao;
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    system("clear");
    atribuicao(LIMITE);
    zeresima();
    pause();

    while (votacao == 0)
    {
        system("clear");
        printf(" Menu Mesário");
        printf("\n 1 - Liberar urna");
        printf("\n 2 - Encerrar Urna");
        printf("\n Digite sua opção: ");
        scanf("%d", &urna);

        switch (urna)
        {

        case 1:

            verificaEleitor();
            if (achou == true)
            {
                votarGovernador();
                votarPresidente();
                printf(" 'FIM' ");
                pause();
            }

            break;

        case 2:
            system("clear");

            printf(" Encerrou a votação\n");

            printf("\n%s : %d votos", Governador[0].nome, Governador[0].votos);
            printf("\n%s : %d votos", Governador[1].nome, Governador[1].votos);
            printf("\n%s : %d votos", Governador[2].nome, Governador[2].votos);
            printf("\n%s : %d votos", Governador[3].nome, Governador[3].votos);
            printf("\nVotos em Branco Governador : %d votos", votoBrancoGov);
            printf("\nVotos em Nulo Governador : %d votos", votoNuloGov);

            pause();
            votacao = 1;

            break;

        default:
            printf("Opção Inválida");
            pause();
            system("clear");
        }
    }

    return 0;
}

void zeresima()
{
    printf("Impressão da zeresima abertura da urna\n");

    printf("\nGovernador");
    for (i = 0; i < 4; i++)
    {

        printf("\n%s - %s : %d votos", Governador[i].nome, Governador[i].partido, Governador[i].votos);
    };
    printf("\nVotos em Branco Governador : %d votos", votoBrancoGov);
    printf("\nVotos Nulo Governador : %d votos", votoNuloGov);

    printf("\n\nPresidente");
    for (i = 0; i < 4; i++)
    {

        printf("\n%s - %s: %d votos", Presidente[i].nome, Presidente[i].partido, Presidente[i].votos);
    };
    printf("\nVotos em Branco Presidente : %d votos", votoBrancoPrt);
    printf("\nVotos Nulo Presidente : %d votos\n", votoNuloPrt);
};