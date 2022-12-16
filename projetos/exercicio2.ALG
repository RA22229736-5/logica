Algoritmo "PositivoNegativo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/08/2022
Var
   // Seção de Declarações das variáveis
   VALOR: inteiro
   NUM: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   Leia (NUM)
   Se (NUM > 0) entao
      VALOR <- "número positivo"
   Senao se (NUM <0)entao
      VALOR <- "numero negativo"

   Senao se
   VALOR <- "zero"
   Fimse
   Fimse

Escreva (VALOR)


Fimalgoritmo