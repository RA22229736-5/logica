Algoritmo "PositivoNegativo"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/08/2022
Var
   // Se��o de Declara��es das vari�veis
   VALOR: inteiro
   NUM: inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   Leia (NUM)
   Se (NUM > 0) entao
      VALOR <- "n�mero positivo"
   Senao se (NUM <0)entao
      VALOR <- "numero negativo"

   Senao se
   VALOR <- "zero"
   Fimse
   Fimse

Escreva (VALOR)


Fimalgoritmo