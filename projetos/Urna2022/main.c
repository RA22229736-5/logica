// Inclusão de bibliotecas
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição das constantes
#define LIMITE 4

// Declaração e atribuição das variáveis globais
bool votouGovernador, votouPresidente, achouEleitor, achouGov, achouPrt;
int i, urna, votacao, pausa, votoNuloGov, votoBrancoGov, votoNuloPrt,
    votoBrancoPrt, qtdEleitores = 0;

// Definição da estrutura para candidatos
struct candidato {

  int numCandidato;
  char nome[100];
  char partido[15];
  int votos;
};

// Definição da estrutura eleitor
struct eleitor {

  int titulo;
  char nome[100];
  bool jaVotou;
};

// Construção das estruturas para aplicação do sistema
struct candidato Presidente[10];
struct candidato Governador[10];
struct eleitor Eleitor[500];

// Atribuição de dados para as variáveis
int docEleitor[LIMITE] = {13, 22, 71, 27};

char nomeEleitor[LIMITE][100] = {"Joãozinho", "Mariazinha", "Pedrinho",
                                 "Joaquina"};

int numPartido[LIMITE] = {10, 15, 20, 25};

char nomepresidente[LIMITE][100] = {"Didi", "Charlie", "Caco Antibes",
                                    "Chaves"};

char nomegovernador[LIMITE][20] = {"Zé da Farmacia", "João Borracheiro", "Kiko",
                                   "Madruga"};

char legendaPartido[LIMITE][15] = {"PTB", "PSDB", "Radical", "Podemos"};

// Procedimento para limpar a tela
void limpaTela() { system("clear"); }
// Procedimento para dar pause no nosso programa
void pause() {

  if (pausa == 0) {

    fflush(stdin);
    printf("\nPressione enter para continuar...\n");
    getchar();
    pausa++;

  } else {

    fflush(stdin);
    printf("\nPressione enter para continuar...\n");
    getchar();
    getchar();
  }
}
// Procedimento para a passagem de dados das variáveis globais para as variáveis
// das estruturas criadas
void atribuicao() {

  i = 0;

  for (i = 0; i < LIMITE; i++) {
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
}
// Procedimento para votar Presidente
void votarPresidente() {

  limpaTela();
  i = 0;
  int opcaoInt = 0;
  votouPresidente = 0;
  achouPrt = 0;
  char opcao[2] = {'0', '0'};
  char votoEleitorStr[2];
  int votoEleitorInt = 0;
  int comparaString1, comparaString2, opcaos1, opcaos2, opcaon1, opcaon2 = 0;

  printf("ELEIÇÕES 2022 - Ampliar\n");
  printf("      Presidente\n          ");
  gets(votoEleitorStr);

  votoEleitorInt = atoi(votoEleitorStr);

  comparaString1 = strcmp(votoEleitorStr, "b");
  comparaString2 = strcmp(votoEleitorStr, "B");

  do {

    if (Presidente[i].numCandidato == votoEleitorInt) {

      achouPrt = 1;

    } else {

      i++;
    }

  } while (achouPrt == 0 && i < 4);

  if (votouPresidente == 0 && comparaString1 == 0 ||
      comparaString2 == 0 && achouPrt == 0) {

    strcpy(opcao, "0");
    printf("\tVoto Branco\n");
    printf("Confirmar Sim [S] ou Não [N]: ");
    gets(opcao);

    opcaoInt = atoi(opcao);

    opcaos1 = strcmp(opcao, "s");
    opcaos2 = strcmp(opcao, "S");
    opcaon1 = strcmp(opcao, "n");
    opcaon2 = strcmp(opcao, "N");

    if (opcaos1 == 0) {

      votoBrancoPrt  ;
      limpaTela();
      votouPresidente = 1;
    }

    if (opcaos2 == 0) {

      votoBrancoPrt++;
      limpaTela();
      votouPresidente = 1;
    }

    if (opcaon1 == 0) {

      limpaTela();
      votarPresidente();
    }

    if (opcaon2 == 0) {

      limpaTela();
      votarPresidente();
    }

    if (opcaos1 != 0 && opcaos2 != 0 && opcaon1 != 0 && opcaon2 != 0) {

      printf("Opção Inválida");
      pause();
      limpaTela();
      votarPresidente();
    }
  }

  if (achouPrt == 1 && votouPresidente == 0) {

    strcpy(opcao, "0");
    printf("\t%s - %s\n", Presidente[i].nome, Presidente[i].partido);

    printf("Confirmar Sim [S] ou Não [N]: ");
    gets(opcao);

    opcaoInt = atoi(opcao);

    opcaos1 = strcmp(opcao, "s");
    opcaos2 = strcmp(opcao, "S");
    opcaon1 = strcmp(opcao, "n");
    opcaon2 = strcmp(opcao, "N");

    if (opcaos1 == 0) {

      Presidente[i].votos++;
      limpaTela();
      votouPresidente = 1;
    }

    if (opcaos2 == 0) {

      Presidente[i].votos++;
      limpaTela();
      votouPresidente = 1;
    }

    if (opcaon1 == 0) {

      limpaTela();
      votarPresidente();
    }

    if (opcaon2 == 0) {

      limpaTela();
      votarPresidente();
    }

    if (opcaos1 != 0 && opcaos2 != 0 && opcaon1 != 0 && opcaon2 != 0) {

      printf("\nOpção Inválida");
      pause();
      limpaTela();
      votarPresidente();
    }
  }

  if (achouPrt == 0 && votouPresidente == 0) {

    strcpy(opcao, "0");
    printf("\tVoto Nulo\n");

    printf("Confirmar Sim [S] ou Não [N]: ");
    gets(opcao);

    opcaoInt = atoi(opcao);

    opcaos1 = strcmp(opcao, "s");
    opcaos2 = strcmp(opcao, "S");
    opcaon1 = strcmp(opcao, "n");
    opcaon2 = strcmp(opcao, "N");

    if (opcaos1 == 0) {

      votoNuloPrt++;
      limpaTela();
      votouPresidente = 1;
    }

    if (opcaos2 == 0) {

      votoNuloPrt++;
      limpaTela();
      votouPresidente = 1;
    }

    if (opcaon1 == 0) {

      limpaTela();
      votarPresidente();
    }

    if (opcaon2 == 0) {

      limpaTela();
      votarPresidente();
    }

    if (opcaos1 != 0 && opcaos2 != 0 && opcaon1 != 0 && opcaon2 != 0) {

      printf("Opção Inválida");
      pause();
      limpaTela();
      votarPresidente();
    }
  }
}
// Procedimento para votar Governador
void votarGovernador() {

  limpaTela();
  i = 0;
  int opcaoInt = 0;
  votouGovernador = 0;
  achouGov = 0;
  char opcao[2] = {'0', '0'};
  char votoEleitorStr[2];
  int votoEleitorInt = 0;
  int comparaString1, comparaString2, opcaos1, opcaos2, opcaon1, opcaon2 = 0;

  printf("ELEIÇÕES 2022 - Ampliar\n");
  printf("      Governador\n          ");
  gets(votoEleitorStr);

  votoEleitorInt = atoi(votoEleitorStr);

  comparaString1 = strcmp(votoEleitorStr, "b");
  comparaString2 = strcmp(votoEleitorStr, "B");

  do {

    if (Governador[i].numCandidato == votoEleitorInt) {

      achouGov = 1;

    } else {

      i++;
    }

  } while (achouGov == 0 && i < 4);

  if (votouGovernador == 0 && comparaString1 == 0 ||
      comparaString2 == 0 && achouGov == 0) {

    strcpy(opcao, "0");
    printf("\tVoto Branco\n");
    printf("Confirmar Sim [S] ou Não [N]: ");
    gets(opcao);

    opcaoInt = atoi(opcao);

    opcaos1 = strcmp(opcao, "s");
    opcaos2 = strcmp(opcao, "S");
    opcaon1 = strcmp(opcao, "n");
    opcaon2 = strcmp(opcao, "N");

    if (opcaos1 == 0) {

      votoBrancoGov++;
      limpaTela();
      votouGovernador = true;
    }

    if (opcaos2 == 0) {

      votoBrancoGov++;
      limpaTela();
      votouGovernador = true;
    }

    if (opcaon1 == 0) {

      limpaTela();
      votarGovernador();
    }

    if (opcaon2 == 0) {

      limpaTela();
      votarGovernador();
    }

    if (opcaos1 != 0 && opcaos2 != 0 && opcaon1 != 0 && opcaon2 != 0) {

      printf("Opção Inválida");
      pause();
      limpaTela();
      votarGovernador();
    }
  }

  if (achouGov == 1 && votouGovernador == 0) {

    strcpy(opcao, "0");
    printf("%s - %s\n", Governador[i].nome, Governador[i].partido);

    printf("Confirmar Sim [S] ou Não [N]: ");
    gets(opcao);

    opcaoInt = atoi(opcao);

    opcaos1 = strcmp(opcao, "s");
    opcaos2 = strcmp(opcao, "S");
    opcaon1 = strcmp(opcao, "n");
    opcaon2 = strcmp(opcao, "N");

    if (opcaos1 == 0) {

      Governador[i].votos++;
      limpaTela();
      votouGovernador = 1;
    }

    if (opcaos2 == 0) {

      Governador[i].votos++;
      limpaTela();
      votouGovernador = 1;
    }

    if (opcaon1 == 0) {

      limpaTela();
      votarGovernador();
    }

    if (opcaon2 == 0) {

      limpaTela();
      votarGovernador();
    }

    if (opcaos1 != 0 && opcaos2 != 0 && opcaon1 != 0 && opcaon2 != 0) {

      printf("\nOpção Inválida");
      pause();
      limpaTela();
      votarGovernador();
    }
  }

  if (achouGov == 0 && votouGovernador == 0) {

    strcpy(opcao, "0");
    printf("\tVoto Nulo\n");

    printf("Confirmar Sim [S] ou Não [N]: ");
    gets(opcao);

    opcaoInt = atoi(opcao);

    opcaos1 = strcmp(opcao, "s");
    opcaos2 = strcmp(opcao, "S");
    opcaon1 = strcmp(opcao, "n");
    opcaon2 = strcmp(opcao, "N");

    if (opcaos1 == 0) {

      votoNuloGov++;
      limpaTela();
      votouGovernador = 1;
    }

    if (opcaos2 == 0) {

      votoNuloGov++;
      limpaTela();
      votouGovernador = 1;
    }

    if (opcaon1 == 0) {

      limpaTela();
      votarGovernador();
    }

    if (opcaon2 == 0) {

      limpaTela();
      votarGovernador();
    }

    if (opcaos1 != 0 && opcaos2 != 0 && opcaon1 != 0 && opcaon2 != 0) {

      printf("Opção Inválida");
      pause();
      limpaTela();
      votarGovernador();
    }
  }
}
// Procedimento para verificar se o eleitor faz parte da seção
void verificaEleitor() {
  limpaTela();
  achouEleitor = false;
  int verificaDoc;
  i = 0;
  printf(" Insira o numero do titulo do eleitor: ");
  scanf("%d", &verificaDoc);

  // Laço para verificar se o eleitor pertence a seção
  do {
    if (Eleitor[i].titulo == verificaDoc) {
      achouEleitor = true;
    } else {
      i++;
    }

  } while (achouEleitor == false && i <= LIMITE);

  if (achouEleitor == false ||
      (achouEleitor == true && Eleitor[i].titulo == 0)) {

    printf("\nEleitor não faz parte desta seção eleitoral");
    printf(
        "\nTente novamente ou encaminhe para a área de justificação de votos");
    pause();
    limpaTela();
    achouEleitor = false;
  }

  if (achouEleitor == true && Eleitor[i].jaVotou == true) {

    printf("\nO(A) Eleitor(a) %s ja votou\n", Eleitor[i].nome);
    pause();
    limpaTela();
    achouEleitor = false;
  }

  if ((achouEleitor == true && Eleitor[i].titulo != 0) &&
      Eleitor[i].jaVotou == false) {

    printf("\nO(A) Eleitor(a) %s faz parte desta seção\n", Eleitor[i].nome);
    printf("\n\tUrna liberada\n");
    Eleitor[i].jaVotou = true;
    pause();
    limpaTela();
  }
}
// Declara procedimento para imprimir zerésima
void zeresima();
void apuracao();
// Programa Principal
char travadoc[2];
int rodaUrna = 0;
int main(int argc, char *argv[]) {

  setlocale(LC_ALL, "Portuguese");
  limpaTela();

  FILE *trava;

  trava = fopen("trava.txt", "r");

  fscanf(trava, "%s", travadoc);

  rodaUrna = strcmp(travadoc, "0");

  fclose(trava);

  if (rodaUrna == 0) {

    atribuicao();
    zeresima();
    pause();

    while (votacao == 0) {

      limpaTela();
      printf(" Menu Mesário");
      printf("\n 1 - Liberar urna");
      printf("\n 2 - Encerrar Urna");
      printf("\n Digite sua opção: ");
      scanf("%d", &urna);

      switch (urna) {

      case 1:

        verificaEleitor();

        if (achouEleitor == true) {

          votarGovernador();
          votarPresidente();
          qtdEleitores++;
          printf("\t\t'FIM' ");
          pause();
            
        }

        break;

      case 2:

        limpaTela();
        printf("\tEncerrou a votação\n\n");
        apuracao();
        votacao = 1;

        break;

      default:

        printf("Opção Inválida");
        pause();
        limpaTela();

        break;
      }
    }
  }

  trava = fopen("trava.txt", "w+");

  fprintf(trava, "1");

  fclose(trava);

  return 0;
}
// Procedimento para imprimir zerésima
void zeresima() {

  FILE *zeresima;

  zeresima = fopen("Zeresima.docx", "w");

  fprintf(zeresima, "Impressão da zeresima abertura da urna\n");
  fprintf(zeresima, "\nGovernador");

  printf("Impressão da zeresima abertura da urna\n");
  printf("\nGovernador");

  for (i = 0; i < LIMITE; i++) {

    fprintf(zeresima, "\n%s - %s : %d votos", Governador[i].nome,
            Governador[i].partido, Governador[i].votos);
    printf("\n%s - %s : %d votos", Governador[i].nome, Governador[i].partido,
           Governador[i].votos);
  }

  fprintf(zeresima, "\nVotos em Branco Governador : %d votos", votoBrancoGov);
  fprintf(zeresima, "\nVotos Nulo Governador : %d votos", votoNuloGov);

  printf("\nVotos em Branco Governador : %d votos", votoBrancoGov);
  printf("\nVotos Nulo Governador : %d votos", votoNuloGov);

  fprintf(zeresima, "\n\nPresidente");
  printf("\n\nPresidente");
  for (i = 0; i < 4; i++) {

    fprintf(zeresima, "\n%s - %s: %d votos", Presidente[i].nome,
            Presidente[i].partido, Presidente[i].votos);
    printf("\n%s - %s: %d votos", Presidente[i].nome, Presidente[i].partido,
           Presidente[i].votos);
  };

  fprintf(zeresima, "\nVotos em Branco Presidente : %d votos", votoBrancoPrt);
  fprintf(zeresima, "\nVotos Nulo Presidente : %d votos\n", votoNuloPrt);

  printf("\nVotos em Branco Presidente : %d votos", votoBrancoPrt);
  printf("\nVotos Nulo Presidente : %d votos\n", votoNuloPrt);

  fclose(zeresima);
};
void apuracao() {
  FILE *apuracao;

  apuracao = fopen("apuracao.txt", "w");

  fprintf(apuracao, "Apuração dos votos\n");
  fprintf(apuracao, "\nGovernador");

  printf("Apuração dos votos\n");
  printf("\nGovernador");

  for (i = 0; i < LIMITE; i++) {

    fprintf(apuracao, "\n%s - %s : %d votos", Governador[i].nome,
            Governador[i].partido, Governador[i].votos);
    printf("\n%s - %s : %d votos", Governador[i].nome, Governador[i].partido,
           Governador[i].votos);
  }

  fprintf(apuracao, "\nVotos em Branco Governador : %d votos", votoBrancoGov);
  fprintf(apuracao, "\nVotos Nulo Governador : %d votos", votoNuloGov);

  printf("\nVotos em Branco Governador : %d votos", votoBrancoGov);
  printf("\nVotos Nulo Governador : %d votos", votoNuloGov);

  fprintf(apuracao, "\n\nPresidente");
  printf("\n\nPresidente");
  for (i = 0; i < 4; i++) {

    fprintf(apuracao, "\n%s - %s: %d votos", Presidente[i].nome,
            Presidente[i].partido, Presidente[i].votos);

    printf("\n%s - %s: %d votos", Presidente[i].nome, Presidente[i].partido,
           Presidente[i].votos);
  };
  fprintf(apuracao, "\nVotos em Branco Presidente : %d votos", votoBrancoPrt);
  fprintf(apuracao, "\nVotos Nulo Presidente : %d votos\n", votoNuloPrt);

  printf("\nVotos em Branco Presidente : %d votos", votoBrancoPrt);
  printf("\nVotos Nulo Presidente : %d votos\n", votoNuloPrt);

  fclose(apuracao);
};